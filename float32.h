#ifndef CORELIB_FLOAT32_H
#define CORELIB_FLOAT32_H

#include "_float32.h"

void float32_unpackl(unsigned const char[4], float32 *);
void float32_unpackb(unsigned const char[4], float32 *);
void float32_packl(unsigned char[4], float32);
void float32_packb(unsigned char[4], float32);

#endif
