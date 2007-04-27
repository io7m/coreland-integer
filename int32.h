#ifndef INTEGER_INT32_H
#define INTEGER_INT32_H

#include "_int32.h"

void int32_unpackl(const unsigned char[4], int32 *);
void int32_unpackb(const unsigned char[4], int32 *);
void int32_packl(unsigned char[4], int32);
void int32_packb(unsigned char[4], int32);

#endif
