#include "uint16.h"

void uint16_packl(unsigned char n[2], uint16 ui)
{
  n[0] = ui & 0xffu;
  n[1] = ui >> 8u;
}
void uint16_packb(unsigned char n[2], uint16 ui)
{
  n[0] = ui >> 8u;
  n[1] = ui & 0xffu;
}

