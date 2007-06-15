#include <math.h>

int main(int argc, char *argv[])
{
  float x;
  int i;

  x = frexpf((float) argc, &i);
  return 0;
}
