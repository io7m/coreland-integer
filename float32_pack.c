#include "_byteorder.h"
#include "float32.h"

void float32_packl(unsigned char n[4], float32 f)
{
#if BYTEORDER == E_BIG_ENDIAN
    n[3] = ((unsigned char *) &f)[0];
    n[2] = ((unsigned char *) &f)[1];
    n[1] = ((unsigned char *) &f)[2];
    n[0] = ((unsigned char *) &f)[3];
#else
    n[0] = ((unsigned char *) &f)[0];
    n[1] = ((unsigned char *) &f)[1];
    n[2] = ((unsigned char *) &f)[2];
    n[3] = ((unsigned char *) &f)[3];
#endif
}
void float32_packb(unsigned char n[4], float32 f)
{
#if BYTEORDER == E_BIG_ENDIAN
    n[0] = ((unsigned char *) &f)[0];
    n[1] = ((unsigned char *) &f)[1];
    n[2] = ((unsigned char *) &f)[2];
    n[3] = ((unsigned char *) &f)[3];
#else
    n[0] = ((unsigned char *) &f)[3];
    n[1] = ((unsigned char *) &f)[2];
    n[2] = ((unsigned char *) &f)[1];
    n[3] = ((unsigned char *) &f)[0];
#endif
}
