#include <stdio.h>

int go(const char* s)
{
  puts("#ifndef _FLOAT32_H");
  puts("#define _FLOAT32_H");
  puts("/* automatically generated - do not edit */");
  printf("typedef %s float32;\n", s);
  fprintf(stderr, "float32: %s\n", s);
  puts("#endif");
  return 0;
}

int main()
{
  if ((sizeof(float) * 8) == 32) return go("float");
  if ((sizeof(double) * 8) == 32) return go("double");
  if ((sizeof(long double) * 8) == 32) return go("long double");

  return 1;
}
