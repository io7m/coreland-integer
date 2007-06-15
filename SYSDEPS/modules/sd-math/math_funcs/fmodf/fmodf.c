#include <math.h>

int main(int argc, char *argv[])
{
  float x;
  x = fmodf((float) argc, (float) argc);
  return 0;
}
