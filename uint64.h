#ifndef INTEGER_UINT64_H
#define INTEGER_UINT64_H

#include "_uint64.h"

void uint64_unpackl(const unsigned char[8], uint64 *);
void uint64_unpackb(const unsigned char[8], uint64 *);
void uint64_packl(unsigned char[8], uint64);
void uint64_packb(unsigned char[8], uint64);

#endif
