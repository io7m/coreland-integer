#include <stdio.h>
#include <limits.h>

int go(const char* s) { printf("%s\n", s); return 0; }
int main(void)
{
  if (sizeof(unsigned char) * CHAR_BIT == 32)
    return go("unsigned char");
  if (sizeof(unsigned short) * CHAR_BIT == 32)
    return go("unsigned short");
  if (sizeof(unsigned int) * CHAR_BIT == 32)
    return go("unsigned int");
  if (sizeof(unsigned long) * CHAR_BIT == 32)
    return go("unsigned long");
  if (sizeof(unsigned long long) * CHAR_BIT == 32)
    return go("unsigned long long");

  return 1;
}
