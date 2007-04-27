#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "t_assert.h"

static unsigned long test_num;

static void test_assert_fail(void)
{
  exit(1);
}

void test_assert_core(unsigned int cond, const char *fname,
                      unsigned long line, const char *text)
{
  if (!cond) {
    if (!errno) 
      fprintf(stderr, "[%lu] fail: %s: %lu: (%s) is false\n",
                       test_num, fname, line, text);
    else
      fprintf(stderr, "[%lu] fail: %s: %lu: (%s) is false (%s)\n",
                       test_num, fname, line, text, strerror(errno));
    test_assert_fail();
  }
  fprintf(stderr, "[%lu] pass: %s: %lu: %s\n", test_num, fname, line, text);
  test_num++;
}
