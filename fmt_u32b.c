#include "fmt_spec.h"
#include "uint32.h"
#include "uint64.h"

unsigned int fmt_u32b(char *str, uint32 uib)
{
  return fmt_u64b(str, (uint64) uib);
}

