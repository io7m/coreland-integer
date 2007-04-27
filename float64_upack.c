#include "_byteorder.h"
#include "float64.h"

void float64_unpackl(unsigned const char n[4], float64 *f)
{
#if BYTEORDER == E_BIG_ENDIAN
    ((unsigned char *) f)[0] = n[7];
    ((unsigned char *) f)[1] = n[6];
    ((unsigned char *) f)[2] = n[5];
    ((unsigned char *) f)[3] = n[4];
    ((unsigned char *) f)[4] = n[3];
    ((unsigned char *) f)[5] = n[2];
    ((unsigned char *) f)[6] = n[1];
    ((unsigned char *) f)[7] = n[0];
#else
    ((unsigned char *) f)[0] = n[0];
    ((unsigned char *) f)[1] = n[1];
    ((unsigned char *) f)[2] = n[2];
    ((unsigned char *) f)[3] = n[3];
    ((unsigned char *) f)[4] = n[4];
    ((unsigned char *) f)[5] = n[5];
    ((unsigned char *) f)[6] = n[6];
    ((unsigned char *) f)[7] = n[7];
#endif
}
void float64_unpackb(unsigned const char n[4], float64 *f)
{
#if BYTEORDER == E_BIG_ENDIAN
    ((unsigned char *) f)[0] = n[0];
    ((unsigned char *) f)[1] = n[1];
    ((unsigned char *) f)[2] = n[2];
    ((unsigned char *) f)[3] = n[3];
    ((unsigned char *) f)[4] = n[4];
    ((unsigned char *) f)[5] = n[5];
    ((unsigned char *) f)[6] = n[6];
    ((unsigned char *) f)[7] = n[7];
#else
    ((unsigned char *) f)[7] = n[0];
    ((unsigned char *) f)[6] = n[1];
    ((unsigned char *) f)[5] = n[2];
    ((unsigned char *) f)[4] = n[3];
    ((unsigned char *) f)[3] = n[4];
    ((unsigned char *) f)[2] = n[5];
    ((unsigned char *) f)[1] = n[6];
    ((unsigned char *) f)[0] = n[7];
#endif
}
