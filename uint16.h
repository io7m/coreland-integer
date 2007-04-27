#ifndef INTEGER_UINT16_H
#define INTEGER_UINT16_H

#include "_uint16.h"

void uint16_unpackl(const unsigned char[2], uint16 *);
void uint16_unpackb(const unsigned char[2], uint16 *);
void uint16_packl(unsigned char[2], uint16);
void uint16_packb(unsigned char[2], uint16);

#endif
