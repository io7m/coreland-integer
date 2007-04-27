#include "fmt_spec.h"
#include "uint32.h"
#include "uint64.h"

unsigned int fmt_u32(char *str, uint32 ui)
{
  return fmt_u64(str, (uint64) ui);
}

