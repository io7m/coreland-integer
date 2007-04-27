#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../scan_spec.h"
#include "../uint32.h"
#include "../uint64.h"

struct int_str {
  unsigned int sz;
  unsigned int base;
  const char *str;
  uint64 n;
};

static struct int_str int_list[] = {
  { 32, 10, "2147483648",         2147483648U            },
  { 32, 16, "80000000",           0x80000000U            },
  { 32, 8,  "20000000000",        020000000000U          },
  { 64, 10, "4503599627370480",   4503599627370480ULL    },
  { 64, 16, "ffffffffffff0",      0xffffffffffff0ULL     },
  { 64, 16, "16FC461",            0x16FC461ULL           },
  { 64, 8,  "177777777777777760", 0177777777777777760ULL },
  { 0, 0, 0, 0 },
};

int main(void)
{
  uint32 ui;
  uint64 u64;
  unsigned int i;

  i = 0;
  for (;;) {
    switch (int_list[i].sz) {
      case 0: return 0; break;
      case 32:
        ui = 0;
        switch (int_list[i].base) {
          case 10:
            scan_u32(int_list[i].str, &ui);
            if (ui != (uint32) int_list[i].n) {
              printf("fail: scan_u32: [%u] ui == %lu\n", i, ui); return 1;
            }
            break;
          case 16:
            scan_u32x(int_list[i].str, &ui);
            if (ui != (uint32) int_list[i].n) {
              printf("fail: scan_u32x: [%u] ui == %lx\n", i, ui); return 1;
            }
            break;
          case 8:
            scan_u32o(int_list[i].str, &ui);
            if (ui != (uint32) int_list[i].n) {
              printf("fail: scan_u32o: [%u] ui == %lo\n", i, ui); return 1;
            }
            break;
          default: break;
        }
        break;
      case 64:
        u64 = 0;
        switch (int_list[i].base) {
          case 10:
            scan_u64(int_list[i].str, &u64);
            if (u64 != (uint64) int_list[i].n) {
              printf("fail: scan_u64: [%u] u64 == %llu\n", i, u64); return 1;
            }
            break;
          case 16:
            scan_u64x(int_list[i].str, &u64);
            if (u64 != (uint64) int_list[i].n) {
              printf("fail: scan_u64x: [%u] u64 == %llx\n", i, u64); return 1;
            }
            break;
          case 8:
            scan_u64o(int_list[i].str, &u64);
            if (u64 != (uint64) int_list[i].n) {
              printf("fail: scan_u64o: [%u] u64 == %llo\n", i, u64); return 1;
            }
            break;
          default: break;
        }
        break;
      default: break;
    }
    ++i;
  }

  return 0;
}
