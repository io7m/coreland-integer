#include <stdio.h>
#include <limits.h>

int go(const char* s)
{
  puts("#ifndef _INT64_H");
  puts("#define _INT64_H");
  puts("/* automatically generated - do not edit */");
  printf("typedef %s int64;\n", s);
  fprintf(stderr, "int64: %s\n", s);
  puts("#endif");
  return 0;
}

int main(void)
{
  if (sizeof(signed char) * CHAR_BIT == 64)
    return go("signed char");
  if (sizeof(signed short) * CHAR_BIT == 64)
    return go("signed short");
  if (sizeof(signed int) * CHAR_BIT == 64)
    return go("signed int");
  if (sizeof(signed long) * CHAR_BIT == 64)
    return go("signed long");
  if (sizeof(signed long long) * CHAR_BIT == 64)
    return go("signed long long");

  return 1;
}
