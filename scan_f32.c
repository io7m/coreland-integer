#include <math.h> /* severe problems on PPC if this is not included */
#include "scan_fspec.h"
#include "sd_math.h"

#if !defined(HAVE_MATH_POWF)
static float32 powf(float32 x, float32 y) { return pow(x, y); }
#endif

unsigned int scan_float32(const char *str, float32 *f)
{
  const char *ptr;
  float32 tf;
  float32 df;
  float32 xf; 
  float32 exp;
  unsigned int pos;
  unsigned int div;
  unsigned int exp_sign;
  char ch;

  ptr = str;
  tf = 0;
  df = 0;
  div = 1;
  pos = 0;
  exp = 0;
  exp_sign = 0;

  if (str[0] == '-') ++str;

  for (;;) {
    ch = str[pos];
    switch (ch) {
      case 0:
        goto END;
        break;
      case '.':
        goto DECIMAL_POINT;
        break;
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        ch -= '0'; tf = (tf * 10) + ch; ++pos;
        break;
      case 'e':
      case 'E':
        goto SCI_NOTATION;
      default:
        goto END;
    }
  }

  DECIMAL_POINT:
  ++pos;

  for (;;) {
    ch = str[pos];
    switch (ch) {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        ch -= '0'; xf = (float32) ch / powf(10, div); df += xf;
        ++pos;
        ++div;
        break;
      case 'e':
      case 'E':
        goto SCI_NOTATION;
      default:
        goto END;
    }
  }

  SCI_NOTATION:

  /* skip 'e' */
  ++pos;

  /* check sign */
  if (str[pos] == '-') { exp_sign = 1; ++pos; }

  for (;;) {
    ch = str[pos];
    switch (ch) {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        ch -= '0'; exp = (exp * 10) + ch; ++pos;
        break;
      default:
        goto END;
    }
  }

  END:
  tf = df + tf;
  if (exp_sign) exp = -exp;
  tf *= powf(10, exp);

  if (ptr[0] == '-') tf = -tf;
  *f = tf;
  return pos;
}
