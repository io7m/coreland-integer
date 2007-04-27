#include <stdio.h>
#include "ctxt.h"

const char progname[] = "integer-conf";

int str_diff(register const char *, register const char *);
long str_rchr(register const char *, register int);

#define FLAG_INCDIR  0x0001
#define FLAG_DLIBDIR 0x0002
#define FLAG_SLIBDIR 0x0004
#define FLAG_NEWLINE 0x0008
#define FLAG_VERSION 0x0010
#define FLAG_COMPILE 0x0020
#define FLAG_HELP    0x0040
#define FLAG_CFLAGS  0x0080
#define FLAG_LDFLAGS 0x0100

struct flag { const char *flag; unsigned int val; const char *desc; };
static const struct flag flags[] = {
  { "incdir",  FLAG_INCDIR, "print include directory" },
  { "dlibdir", FLAG_DLIBDIR, "print dynamic library directory" },
  { "slibdir", FLAG_SLIBDIR, "print static library directory" },
  { "compile", FLAG_COMPILE, "modify output for use as compiler flags" },
  { "cflags",  FLAG_CFLAGS,  "output required compiler flags" },
  { "ldflags", FLAG_LDFLAGS, "output required linker flags" },
  { "version", FLAG_VERSION, "print library version" },
  { "help",    FLAG_HELP, "this message" },
  { "newline", FLAG_NEWLINE, "print trailing newline" },
};

void usage()
{
  printf("%s: [help] ops ...\n", progname);
}
void help()
{
  unsigned int ind;
  usage();
  printf("possible operators:\n");
  for (ind = 0; ind < sizeof(flags) / sizeof(struct flag); ++ind)
    printf("%s - %s\n", flags[ind].flag, flags[ind].desc);
}

int main(int argc, char *argv[])
{
  unsigned int flag;
  unsigned int ind;
  unsigned int jnd;

  --argc;
  ++argv;

  if (!argc) { usage(); return 111; }

  flag = 0;
  for (ind = 0; ind < argc; ++ind) {
    for (jnd = 0; jnd < sizeof(flags) / sizeof(struct flag); ++jnd) {
      if (str_diff(argv[ind], flags[jnd].flag) == 0) {
        flag |= flags[jnd].val;
        break;
      }
    }
  }
  if (flag & FLAG_HELP) { help(); return 0; }
  if (flag & FLAG_VERSION) printf("%s ", ctxt_version);
  if (flag & FLAG_INCDIR) {
    if (flag & FLAG_COMPILE) {
      ctxt_incdir[str_rchr(ctxt_incdir, '/')] = 0;
      printf("-I%s ", ctxt_incdir);
    } else {
      printf("%s ", ctxt_incdir);
    }
  }
  if (flag & FLAG_CFLAGS) {
#ifdef SYS_HAVE_CPU_EXT_SSE
    if (ctxt_flags_sse_len > 1) printf("%s ", ctxt_flags_sse);
#endif
#ifdef SYS_HAVE_CPU_EXT_SSE2
    if (ctxt_flags_sse2_len > 1) printf("%s ", ctxt_flags_sse2);
#endif
#ifdef SYS_HAVE_CPU_EXT_SSE3
    if (ctxt_flags_sse3_len > 1) printf("%s ", ctxt_flags_sse3);
#endif
#ifdef SYS_HAVE_CPU_EXT_ALTIVEC
    if (ctxt_flags_altivec_len > 1) printf("%s ", ctxt_flags_altivec);
#endif
    if (ctxt_flags_math_len > 1) printf("%s ", ctxt_flags_math);
  }
  if (flag & FLAG_DLIBDIR) {
    if (flag & FLAG_COMPILE) printf("-L");
    printf("%s ", ctxt_dlibdir);
  }
  if (flag & FLAG_SLIBDIR) {
    if (flag & FLAG_COMPILE) printf("-L");
    printf("%s ", ctxt_slibdir);
  }
  if (flag & FLAG_LDFLAGS) {
    if (ctxt_libs_math_len > 2) printf("%s ", ctxt_libs_math);
  }
  if (flag & FLAG_NEWLINE) printf("\n");
  return 0;
}

/* portability functions */
int str_diff(register const char *s, register const char *t)
{
  register char u;
  for (;;) {
    u = *s; if (u != *t) break; if (!u) break; ++s; ++t;
    u = *s; if (u != *t) break; if (!u) break; ++s; ++t;
    u = *s; if (u != *t) break; if (!u) break; ++s; ++t;
    u = *s; if (u != *t) break; if (!u) break; ++s; ++t;
  }
  return ((int)(unsigned int)(unsigned char) u) - 
         ((int)(unsigned int)(unsigned char) *t);
}
long str_rchr(register const char *s, register int c)
{
  register const char *t;
  register const char *u;
  register char cc;
  int f = 0;
  for (t = s, cc = c, u = 0;;) {
    if (!*t) break; if (*t == cc) { u = t; f = 1; } ++t;
    if (!*t) break; if (*t == cc) { u = t; f = 1; } ++t;
    if (!*t) break; if (*t == cc) { u = t; f = 1; } ++t;
    if (!*t) break; if (*t == cc) { u = t; f = 1; } ++t;
  }
  if (f == 0) return -1;
  if (!u) u = t;
  return u - s;
}
