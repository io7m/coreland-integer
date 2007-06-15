#include <math.h>

int main(int argc, char *argv[])
{
  double x;
  int i;

  x = frexp((double) argc, &i);
  return 0;
}
