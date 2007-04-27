#include "uint64.h"

void uint64_unpackl(unsigned const char n[8], uint64 *ui)
{
  uint64 t;
  t =  n[7]; t <<= 8u;
  t += n[6]; t <<= 8u;
  t += n[5]; t <<= 8u;
  t += n[4]; t <<= 8u; 
  t += n[3]; t <<= 8u;
  t += n[2]; t <<= 8u;
  t += n[1]; t <<= 8u;
  t += n[0];
  *ui = t;
}
void uint64_unpackb(unsigned const char n[8], uint64 *ui)
{
  uint64 t;
  t =  n[0]; t <<= 8u;
  t += n[1]; t <<= 8u;
  t += n[2]; t <<= 8u;
  t += n[3]; t <<= 8u;
  t += n[4]; t <<= 8u;
  t += n[5]; t <<= 8u;
  t += n[6]; t <<= 8u;
  t += n[7];
  *ui = t;
}
