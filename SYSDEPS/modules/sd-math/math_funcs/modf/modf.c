#include <math.h>

int main(int argc, char *argv[])
{
  double x;
  double y;
  x = modf((double) argc, &y);
  return 0;
}
