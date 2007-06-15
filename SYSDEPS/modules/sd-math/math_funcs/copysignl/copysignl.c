#include <math.h>

int main(int argc, char *argv[])
{
  long double x;
  x = copysignl((long double) argc, (long double) argc);
  return 0;
}
