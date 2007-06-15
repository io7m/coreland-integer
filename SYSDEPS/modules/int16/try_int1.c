#include <stdio.h>
#include <limits.h>

int go(const char* s) { printf("%s\n", s); return 0; }
int main(void)
{
  if (sizeof(signed char) * CHAR_BIT == 16)
    return go("signed char");
  if (sizeof(signed short) * CHAR_BIT == 16)
    return go("signed short");
  if (sizeof(signed int) * CHAR_BIT == 16)
    return go("signed int");
  if (sizeof(signed long) * CHAR_BIT == 16)
    return go("signed long");

  return 1;
}
