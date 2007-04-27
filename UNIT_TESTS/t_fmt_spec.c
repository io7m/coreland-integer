#include <stdio.h>
#include "../fmt_spec.h"
#include "t_assert.h"

int main(void)
{
  uint32 u32;
  uint64 u64;
  char c32[FMT_UINT32];
  char c64[FMT_UINT64];

  /* u32 */

  u32 = 10000U;
  c32[fmt_u32(c32, u32)] = 0;
  test_assert(c32[0] == '1');
  test_assert(c32[1] == '0');
  test_assert(c32[2] == '0');
  test_assert(c32[3] == '0');
  test_assert(c32[4] == '0');

  u32 = 0xdeadfaceU;
  c32[fmt_u32x(c32, u32)] = 0;
  test_assert(c32[0] == 'd');
  test_assert(c32[1] == 'e');
  test_assert(c32[2] == 'a');
  test_assert(c32[3] == 'd');
  test_assert(c32[4] == 'f');
  test_assert(c32[5] == 'a');
  test_assert(c32[6] == 'c');
  test_assert(c32[7] == 'e');

  u32 = 0123456U;
  c32[fmt_u32o(c32, u32)] = 0;
  test_assert(c32[0] == '1');
  test_assert(c32[1] == '2');
  test_assert(c32[2] == '3');
  test_assert(c32[3] == '4');
  test_assert(c32[4] == '5');
  test_assert(c32[5] == '6');

  /* u64 */

  u64 = 12302652060662212828ULL;
  c64[fmt_u64(c64, u64)] = 0;  
  test_assert(c64[0] == '1');
  test_assert(c64[1] == '2');
  test_assert(c64[2] == '3');
  test_assert(c64[3] == '0');
  test_assert(c64[4] == '2');
  test_assert(c64[5] == '6');
  test_assert(c64[6] == '5');
  test_assert(c64[7] == '2');
  test_assert(c64[8] == '0');
  test_assert(c64[9] == '6');
  test_assert(c64[10] == '0');
  test_assert(c64[11] == '6');
  test_assert(c64[12] == '6');
  test_assert(c64[13] == '2');
  test_assert(c64[14] == '2');
  test_assert(c64[15] == '1');
  test_assert(c64[16] == '2');
  test_assert(c64[17] == '8');
  test_assert(c64[18] == '2');
  test_assert(c64[19] == '8');

  u64 = 0xaabbccddeeffaabbULL;
  c64[fmt_u64x(c64, u64)] = 0;
  test_assert(c64[0] == 'a');
  test_assert(c64[1] == 'a');
  test_assert(c64[2] == 'b');
  test_assert(c64[3] == 'b');
  test_assert(c64[4] == 'c');
  test_assert(c64[5] == 'c');
  test_assert(c64[6] == 'd');
  test_assert(c64[7] == 'd');
  test_assert(c64[8] == 'e');
  test_assert(c64[9] == 'e');
  test_assert(c64[10] == 'f');
  test_assert(c64[11] == 'f');
  test_assert(c64[12] == 'a');
  test_assert(c64[13] == 'a');
  test_assert(c64[14] == 'b');
  test_assert(c64[15] == 'b');

  u64 = 01252736315675677724000ULL;
  c64[fmt_u64o(c64, u64)] = 0;
  test_assert(c64[0] == '1');
  test_assert(c64[1] == '2');
  test_assert(c64[2] == '5');
  test_assert(c64[3] == '2');
  test_assert(c64[4] == '7');
  test_assert(c64[5] == '3');
  test_assert(c64[6] == '6');
  test_assert(c64[7] == '3');
  test_assert(c64[8] == '1');
  test_assert(c64[9] == '5');
  test_assert(c64[10] == '6');
  test_assert(c64[11] == '7');
  test_assert(c64[12] == '5');
  test_assert(c64[13] == '6');
  test_assert(c64[14] == '7');
  test_assert(c64[15] == '7');
  test_assert(c64[16] == '7');
  test_assert(c64[17] == '2');
  test_assert(c64[18] == '4');
  test_assert(c64[19] == '0');
  test_assert(c64[20] == '0');
  test_assert(c64[21] == '0');

  return 0;
}
