#ifndef INTEGER_INT64_H
#define INTEGER_INT64_H

#include "_int64.h"

void int64_unpackl(const unsigned char[8], int64 *);
void int64_unpackb(const unsigned char[8], int64 *);
void int64_packl(unsigned char[8], int64);
void int64_packb(unsigned char[8], int64);

#endif
