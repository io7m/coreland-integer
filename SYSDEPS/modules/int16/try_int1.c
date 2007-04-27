#include <stdio.h>
#include <limits.h>

int go(const char* s)
{
  puts("#ifndef _INT16_H");
  puts("#define _INT16_H");
  puts("/* automatically generated - do not edit */");
  printf("typedef %s int16;\n", s);
  fprintf(stderr, "int16: %s\n", s);
  puts("#endif");
  return 0;
}

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
