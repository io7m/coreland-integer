#ifndef INTEGER_UINT32_H
#define INTEGER_UINT32_H

#include "_uint32.h"

void uint32_unpackl(const unsigned char[4], uint32 *);
void uint32_unpackb(const unsigned char[4], uint32 *);
void uint32_packl(unsigned char[4], uint32);
void uint32_packb(unsigned char[4], uint32);

#endif
