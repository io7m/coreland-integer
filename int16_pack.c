#include "int16.h"

void int16_packl(unsigned char n[2], int16 i)
{
  n[0] = i & 0xffu;
  n[1] = i >> 8u;
}
void int16_packb(unsigned char n[2], int16 i)
{
  n[0] = i >> 8u;
  n[1] = i & 0xffu;
}

