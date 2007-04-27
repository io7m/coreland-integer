#include <stdio.h>
#include <unistd.h>

static char rspace[1024];

void put(char *s)
{
  if (printf("%s", s) == -1) _exit(112);
}
void putnum(unsigned int n)
{
  if (printf("%u", n) == -1) _exit(112);
}
int main(int argc, char **argv)
{
  char *name;
  unsigned char ch;
  unsigned int b;
  unsigned int line;
  int i;
  int n;
  int r;
  int done;
  char hex[3];

  if (argc != 2) return 100;
  name = argv[1];
  done = 0;
  b = 0;

  put("char "); put(name); put("[] = {\n");

  line = 0;
  while (!done) {
    r = read(0, rspace, 1024);
    if (r == 0) done = 1;
    if (r == -1) return 101;
    if (r != 1024) {
      /* remove eol */
      for (i = r; i > 0; --i) {
        if (rspace[i] == '\n') { rspace[i] = 0; break; }
      }
    }
    n = 0;
    while (n != r) {
      ch = rspace[n];
      put("0x");
      hex[2] = 0;
      hex[1] = '0' + (ch & 15); ch >>= 4;
      if (hex[1] > '0' + 9) hex[1] += 'a' - '0' - 10;
      hex[0] = '0' + (ch & 15);
      if (hex[0] > '0' + 9) hex[0] += 'a' - '0' - 10;
      put(hex);
      put(", ");
      ++b;
      ++n;
      line += 6;
      if (line >= 72) { put("\n"); line = 0; }
    }
  }

  put("0x00,\n};\n");
  put("const unsigned int ");
  put(name);
  put("_len = ");
  putnum(b);
  put(";\n");
  if (fflush(stdout) == -1) return 111;
  return 0;
}
