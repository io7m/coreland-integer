#include <ieeefp.h>

int main(int argc, char *argv[])
{
  if (finite((float) argc))
    return 112;
  else
    return 0;
}
