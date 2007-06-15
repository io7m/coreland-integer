#include <math.h>

int main(int argc, char *argv[])
{
  double x;
  int i;

  x = remquo((double) argc, (double) argc, &i);
  return 0;
}
