#include <stdio.h>
#include <limits.h>

int go(const char* s)
{
  puts("#ifndef _UINT64_H");
  puts("#define _UINT64_H");
  puts("/* automatically generated - do not edit */");
  printf("typedef %s uint64;\n", s);
  fprintf(stderr, "uint64: %s\n", s);
  puts("#endif");
  return 0;
}

int main(void)
{
  if (sizeof(unsigned char) * CHAR_BIT == 64)
    return go("unsigned char");
  if (sizeof(unsigned short) * CHAR_BIT == 64)
    return go("unsigned short");
  if (sizeof(unsigned int) * CHAR_BIT == 64)
    return go("unsigned int");
  if (sizeof(unsigned long) * CHAR_BIT == 64)
    return go("unsigned long");

  return 1;
}
