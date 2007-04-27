#include "_byteorder.h"
#include "float32.h"

void float32_unpackl(unsigned const char n[4], float32 *f)
{
#if BYTEORDER == E_BIG_ENDIAN
    ((unsigned char *) f)[0] = n[3];
    ((unsigned char *) f)[1] = n[2];
    ((unsigned char *) f)[2] = n[1];
    ((unsigned char *) f)[3] = n[0];
#else
    ((unsigned char *) f)[0] = n[0];
    ((unsigned char *) f)[1] = n[1];
    ((unsigned char *) f)[2] = n[2];
    ((unsigned char *) f)[3] = n[3];
#endif
}
void float32_unpackb(unsigned const char n[4], float32 *f)
{

#if BYTEORDER == E_BIG_ENDIAN
    ((unsigned char *) f)[0] = n[0];
    ((unsigned char *) f)[1] = n[1];
    ((unsigned char *) f)[2] = n[2];
    ((unsigned char *) f)[3] = n[3];
#else
    ((unsigned char *) f)[3] = n[0];
    ((unsigned char *) f)[2] = n[1];
    ((unsigned char *) f)[1] = n[2];
    ((unsigned char *) f)[0] = n[3];
#endif
}
