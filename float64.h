#ifndef CORELIB_FLOAT64_H
#define CORELIB_FLOAT64_H

#include "_float64.h"

void float64_unpackl(unsigned const char[8], float64 *);
void float64_unpackb(unsigned const char[8], float64 *);
void float64_packl(unsigned char[8], float64);
void float64_packb(unsigned char[8], float64);

#endif
