#include "int32.h"

void int32_packl(unsigned char n[4], int32 i)
{
  n[0] = i & 0xffu; i >>= 8u;
  n[1] = i & 0xffu; i >>= 8u;
  n[2] = i & 0xffu;
  n[3] = i >> 8u;
}

void int32_packb(unsigned char n[4], int32 i)
{
  n[3] = i & 0xffu; i >>= 8u;
  n[2] = i & 0xffu; i >>= 8u;
  n[1] = i & 0xffu;
  n[0] = i >> 8u;
}
