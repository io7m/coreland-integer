#include <math.h>

int main(int argc, char *argv[])
{
  long double x;
  x = fpclassifyl((long double) argc);
  return 0;
}
