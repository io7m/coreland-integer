#include "scan_spec.h"
#include "uint64.h"

unsigned int scan_u64x(const char *s, uint64 *ul)
{
  register uint64 res;
  register unsigned int pos;
  register char ch;

  pos = 0;
  res = 0;

  for (;;) {
    ch = s[pos];
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
        ch -= '0';
        break;
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
        ch = ch - 'a' + 10;
        break;
      case 'A':
      case 'B':
      case 'C':
      case 'D':
      case 'E':
      case 'F':
        ch = ch - 'A' + 10;
        break;
      default:
        goto END; 
    }
    res = (res << 4) + (unsigned char) ch;
    ++pos;
  }

  END:
  if (ul) *ul = res;
  return pos;
}

