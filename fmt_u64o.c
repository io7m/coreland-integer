#include "fmt_spec.h"
#include "uint64.h"

unsigned int fmt_u64o(char *str, uint64 ul)
{
  uint64 quo;
  unsigned int len; 

  len = 1;
  quo = ul;
  
  /* no. digits */
  while (quo > 7) { ++len; quo >>= 3; }
  
  /* digit -> ascii (base10) */
  if (str) {
    str += len;
    do { *--str = '0' + (ul & 7); ul >>= 3; } while (ul);
  }
  return len;
}

