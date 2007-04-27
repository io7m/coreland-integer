#include <math.h>

int main(int argc, char *argv[])
{
  double x;
  x = fpclassify((double) argc);
  return 0;
}
