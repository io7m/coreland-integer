#include <math.h>

int main(int argc, char *argv[])
{
  long double x;
  int i;

  x = frexpl((long double) argc, &i);
  return 0;
}
