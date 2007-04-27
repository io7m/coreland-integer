#include "_byteorder.h"
#include "float64.h"

void float64_packl(unsigned char n[8], float64 f)
{
#if BYTEORDER == E_BIG_ENDIAN
    n[7] = ((unsigned char *) &f)[0];
    n[6] = ((unsigned char *) &f)[1];
    n[5] = ((unsigned char *) &f)[2];
    n[4] = ((unsigned char *) &f)[3];
    n[3] = ((unsigned char *) &f)[4];
    n[2] = ((unsigned char *) &f)[5];
    n[1] = ((unsigned char *) &f)[6];
    n[0] = ((unsigned char *) &f)[7];
#else
    n[0] = ((unsigned char *) &f)[0];
    n[1] = ((unsigned char *) &f)[1];
    n[2] = ((unsigned char *) &f)[2];
    n[3] = ((unsigned char *) &f)[3];
    n[4] = ((unsigned char *) &f)[4];
    n[5] = ((unsigned char *) &f)[5];
    n[6] = ((unsigned char *) &f)[6];
    n[7] = ((unsigned char *) &f)[7];
#endif
}
void float64_packb(unsigned char n[8], float64 f)
{
#if BYTEORDER == E_BIG_ENDIAN
    n[0] = ((unsigned char *) &f)[0];
    n[1] = ((unsigned char *) &f)[1];
    n[2] = ((unsigned char *) &f)[2];
    n[3] = ((unsigned char *) &f)[3];
    n[4] = ((unsigned char *) &f)[4];
    n[5] = ((unsigned char *) &f)[5];
    n[6] = ((unsigned char *) &f)[6];
    n[7] = ((unsigned char *) &f)[7];
#else
    n[0] = ((unsigned char *) &f)[7];
    n[1] = ((unsigned char *) &f)[6];
    n[2] = ((unsigned char *) &f)[5];
    n[3] = ((unsigned char *) &f)[4];
    n[4] = ((unsigned char *) &f)[3];
    n[5] = ((unsigned char *) &f)[2];
    n[6] = ((unsigned char *) &f)[1];
    n[7] = ((unsigned char *) &f)[0];
#endif
}
