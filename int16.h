#ifndef INTEGER_INT16_H
#define INTEGER_INT16_H

#include "_int16.h"

void int16_unpackl(unsigned const char[2], int16 *);
void int16_unpackb(unsigned const char[2], int16 *);
void int16_packl(unsigned char[2], int16);
void int16_packb(unsigned char[2], int16);

#endif
