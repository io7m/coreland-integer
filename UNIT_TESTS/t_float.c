#include <stdio.h>
#include "../float32.h"
#include "../float64.h"
#include "t_assert.h"

int main(void)
{
  float32 f32;
  float64 f64;
  unsigned char c32[sizeof(float32)];
  unsigned char c64[sizeof(float64)];

  f32 = 12.567f;
  float32_packl(c32, f32);
  float32_unpackl(c32, &f32);
  test_assert(f32 == 12.567f);

  f32 = 16.123f;
  float32_packb(c32, f32);
  float32_unpackb(c32, &f32);
  test_assert(f32 == 16.123f);

  f64 = 12.567f;
  float64_packl(c64, f64);
  float64_unpackl(c64, &f64);
  test_assert(f64 == 12.567f);

  f64 = 16.123f;
  float64_packb(c64, f64);
  float64_unpackb(c64, &f64);
  test_assert(f64 == 16.123f);

  return 0;
}
