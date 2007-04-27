#include "int64.h"

void int64_packl(unsigned char n[8], int64 i)
{
  n[0] = i & 0xffu; i >>= 8u;
  n[1] = i & 0xffu; i >>= 8u;
  n[2] = i & 0xffu; i >>= 8u;
  n[3] = i & 0xffu; i >>= 8u;
  n[4] = i & 0xffu; i >>= 8u;
  n[5] = i & 0xffu; i >>= 8u;
  n[6] = i & 0xffu;
  n[7] = i >> 8u;
}
void int64_packb(unsigned char n[8], int64 i)
{
  n[7] = i & 0xffu; i >>= 8u;
  n[6] = i & 0xffu; i >>= 8u;
  n[5] = i & 0xffu; i >>= 8u;
  n[4] = i & 0xffu; i >>= 8u;
  n[3] = i & 0xffu; i >>= 8u;
  n[2] = i & 0xffu; i >>= 8u;
  n[1] = i & 0xffu;
  n[0] = i >> 8u;
}
