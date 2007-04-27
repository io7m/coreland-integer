#include "uint64.h"

void uint64_packl(unsigned char n[8], uint64 ui)
{
  n[0] = ui & 0xffu; ui >>= 8u;
  n[1] = ui & 0xffu; ui >>= 8u;
  n[2] = ui & 0xffu; ui >>= 8u;
  n[3] = ui & 0xffu; ui >>= 8u;
  n[4] = ui & 0xffu; ui >>= 8u;
  n[5] = ui & 0xffu; ui >>= 8u;
  n[6] = ui & 0xffu;
  n[7] = ui >> 8u;
}
void uint64_packb(unsigned char n[8], uint64 ui)
{
  n[7] = ui & 0xffu; ui >>= 8u;
  n[6] = ui & 0xffu; ui >>= 8u;
  n[5] = ui & 0xffu; ui >>= 8u;
  n[4] = ui & 0xffu; ui >>= 8u;
  n[3] = ui & 0xffu; ui >>= 8u;
  n[2] = ui & 0xffu; ui >>= 8u;
  n[1] = ui & 0xffu;
  n[0] = ui >> 8u;
}
