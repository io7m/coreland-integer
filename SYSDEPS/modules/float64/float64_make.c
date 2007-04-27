#include <stdio.h>

int go(const char* s)
{
  puts("#ifndef _FLOAT64_H");
  puts("#define _FLOAT64_H");
  puts("/* automatically generated - do not edit */");
  printf("typedef %s float64;\n", s);
  fprintf(stderr, "float64: %s\n", s);
  puts("#endif");
  return 0;
}

int main()
{
  if ((sizeof(float) * 8) == 64) return go("float");
  if ((sizeof(double) * 8) == 64) return go("double");
  if ((sizeof(long double) * 8) == 64) return go("long double");

  return 1;
}
