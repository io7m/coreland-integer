#include "int64.h"

void int64_unpackl(const unsigned char n[8], int64* i)
{
  int64 t;
  t =  n[7]; t <<= 8u;
  t += n[6]; t <<= 8u;
  t += n[5]; t <<= 8u;
  t += n[4]; t <<= 8u; 
  t += n[3]; t <<= 8u;
  t += n[2]; t <<= 8u;
  t += n[1]; t <<= 8u;
  t += n[0];
  *i = t;
}
void int64_unpackb(const unsigned char n[8], int64* i)
{
  int64 t;
  t =  n[0]; t <<= 8u;
  t += n[1]; t <<= 8u;
  t += n[2]; t <<= 8u;
  t += n[3]; t <<= 8u;
  t += n[4]; t <<= 8u;
  t += n[5]; t <<= 8u;
  t += n[6]; t <<= 8u;
  t += n[7];
  *i = t;
}
