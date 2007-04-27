#include "fmt_spec.h"
#include "uint32.h"
#include "uint64.h"

unsigned int fmt_u32x(char *str, uint32 uix)
{
  return fmt_u64x(str, (uint64) uix);
}

