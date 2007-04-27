#include <stdio.h>
#include <limits.h>

int go(const char* s)
{
  puts("#ifndef _UINT32_H");
  puts("#define _UINT32_H");
  puts("/* automatically generated - do not edit */");
  printf("typedef %s uint32;\n", s);
  fprintf(stderr, "uint32: %s\n", s);
  puts("#endif");
  return 0;
}

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

  return 1;
}
