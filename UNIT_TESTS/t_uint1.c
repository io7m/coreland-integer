#include <stdio.h>
#include "../uint16.h"
#include "../uint32.h"
#include "../uint64.h"
#include "t_assert.h"

int main(void)
{
  unsigned char p16[sizeof(uint16)];
  unsigned char p32[sizeof(uint32)];
  unsigned char p64[sizeof(uint64)];
  uint16 u16;
  uint32 u32;
  uint64 u64;

  u16 = 0xffU;
  uint16_packl(p16, u16);
  uint16_unpackl(p16, &u16);
  test_assert(u16 == 0xffU);
  uint16_packb(p16, u16);
  uint16_unpackb(p16, &u16);
  test_assert(u16 == 0xffU);
 
  u32 = 0xfffffU;
  uint32_packl(p32, u32);
  uint32_unpackl(p32, &u32);
  test_assert(u32 == 0xfffffU);
  uint32_packb(p32, u32);
  uint32_unpackb(p32, &u32);
  test_assert(u32 == 0xfffffU);
 
  u64 = 0xfffffaabbccULL;
  uint64_packl(p64, u64);
  uint64_unpackl(p64, &u64);
  test_assert(u64 == 0xfffffaabbccULL);
  uint64_packb(p64, u64);
  uint64_unpackb(p64, &u64);
  test_assert(u64 == 0xfffffaabbccULL);

  return 0;
}
