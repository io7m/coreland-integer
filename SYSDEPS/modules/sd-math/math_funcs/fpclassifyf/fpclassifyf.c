#include <math.h>

int main(int argc, char *argv[])
{
  float x;
  x = fpclassifyf((float) argc);
  return 0;
}
