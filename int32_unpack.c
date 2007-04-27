#include "int32.h"

void int32_unpackl(const unsigned char n[4], int32* i)
{
  int32 t;
  t =  n[3]; t <<= 8u;
  t += n[2]; t <<= 8u;
  t += n[1]; t <<= 8u;
  t += n[0];
  *i = t;
}

void int32_unpackb(const unsigned char n[4], int32* i)
{
  int32 t;
  t =  n[0]; t <<= 8u;
  t += n[1]; t <<= 8u;
  t += n[2]; t <<= 8u;
  t += n[3];
  *i = t;
}
