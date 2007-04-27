#ifndef INTEGER_SCAN_SPEC_H
#define INTEGER_SCAN_SPEC_H

#include "uint32.h"
#include "uint64.h"

unsigned int scan_u32(const char *, uint32 *);
unsigned int scan_u32o(const char *, uint32 *);
unsigned int scan_u32x(const char *, uint32 *);
unsigned int scan_u32b(const char *, uint32 *);

unsigned int scan_u64(const char *, uint64 *);
unsigned int scan_u64o(const char *, uint64 *);
unsigned int scan_u64x(const char *, uint64 *);
unsigned int scan_u64b(const char *, uint64 *);

#endif
