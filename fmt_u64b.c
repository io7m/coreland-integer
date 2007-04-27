#include "fmt_spec.h"
#include "uint64.h"

unsigned int fmt_u64b(char *str, uint64 ul)
{
  uint64 quo;
  unsigned int len; 

  len = 1;
  quo = ul;
  
  /* no. digits */
  while (quo > 1) { ++len; quo >>= 1; }
  
  /* digit -> ascii (base2) */
  if (str) {
    str += len;
    do { *--str = '0' + (ul & 1); ul >>= 1; } while (ul);
  }
  return len;
}

