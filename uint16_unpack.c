#include "uint16.h"

void uint16_unpackl(unsigned const char n[2], uint16 *ui)
{
  *ui = ((uint16) n[1] << 8u) + n[0];
}
void uint16_unpackb(unsigned const char n[2], uint16 *ui)
{
  *ui = ((uint16) n[0] << 8u) + n[1];
}

