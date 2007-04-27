#include "int16.h"

void int16_unpackl(const unsigned char n[2], int16* i)
{
  int16 t;
  t = n[1];
  t <<= 8u;
  t += n[0];
  *i = t;
}
void int16_unpackb(const unsigned char n[2], int16* i)
{
  int16 t;
  t = n[0];
  t <<= 8u;
  t += n[1];
  *i = t;
}

