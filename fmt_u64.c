#include "fmt_spec.h"
#include "uint64.h"

unsigned int fmt_u64(char *str, uint64 ul)
{
  uint64 quo;
  unsigned int len; 

  len = 1;
  quo = ul;
  
  /* no. digits */
  while (quo > 9) { ++len; quo /= 10; }
  
  /* digit -> ascii (base10) */
  if (str) {
    str += len;
    do { *--str = '0' + (ul % 10); ul /= 10; } while (ul);
  }
  return len;
}

