#include "uint32.h"

void uint32_packl(unsigned char n[4], uint32 ui)
{
  n[0] = ui & 0xffu; ui >>= 8u;
  n[1] = ui & 0xffu; ui >>= 8u;
  n[2] = ui & 0xffu;
  n[3] = ui >> 8u;
}
void uint32_packb(unsigned char n[4], uint32 ui)
{
  n[3] = ui & 0xffu; ui >>= 8u;
  n[2] = ui & 0xffu; ui >>= 8u;
  n[1] = ui & 0xffu;
  n[0] = ui >> 8u;
}
