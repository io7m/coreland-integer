#include "scan_spec.h"
#include "uint32.h"
#include "uint64.h"

unsigned int scan_u32o(const char *s, uint32 *ul)
{
  uint64 u64;
  unsigned int num;
  num = scan_u64o(s, &u64);
  if (!num) return 0;
  *ul = (uint32) u64;
  return num;
}

