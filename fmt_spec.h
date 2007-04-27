#ifndef INTEGER_FMT_SPEC_H
#define INTEGER_FMT_SPEC_H

#define FMT_UINT32 33
#define FMT_UINT64 65

#include "uint32.h"

unsigned int fmt_u32(char *, uint32);
unsigned int fmt_u32o(char *, uint32);
unsigned int fmt_u32x(char *, uint32);
unsigned int fmt_u32b(char *, uint32);

#include "uint64.h"

unsigned int fmt_u64(char *, uint64);
unsigned int fmt_u64o(char *, uint64);
unsigned int fmt_u64x(char *, uint64);
unsigned int fmt_u64b(char *, uint64);

#endif
