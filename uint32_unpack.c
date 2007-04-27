#include "uint32.h"

void uint32_unpackl(unsigned const char n[4], uint32 *ui)
{
  uint32 t;
  t =  n[3]; t <<= 8u;
  t += n[2]; t <<= 8u;
  t += n[1]; t <<= 8u;
  t += n[0];
  *ui = t;
}
void uint32_unpackb(unsigned const char n[4], uint32 *ui)
{
  uint32 t;
  t =  n[0]; t <<= 8u;
  t += n[1]; t <<= 8u;
  t += n[2]; t <<= 8u;
  t += n[3];
  *ui = t;
}
