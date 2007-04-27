#include "install.h"
#include "ctxt.h"

/* generate AFTER build, or generated headers will be missing! */

struct install_item insthier[] = {
  {INST_MKDIR, 0, 0, ctxt_bindir, 0, 0, 0755},
  {INST_MKDIR, 0, 0, ctxt_incdir, 0, 0, 0755},
  {INST_MKDIR, 0, 0, ctxt_dlibdir, 0, 0, 0755},
  {INST_MKDIR, 0, 0, ctxt_slibdir, 0, 0, 0755},
  {INST_MKDIR, 0, 0, ctxt_repos, 0, 0, 0755},
  {INST_COPY, "float32_pack.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "float32_upack.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "float64_pack.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "float64_upack.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "fmt_u32.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "fmt_u32b.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "fmt_u32o.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "fmt_u32x.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "fmt_u64.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "fmt_u64b.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "fmt_u64o.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "fmt_u64x.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "int16_pack.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "int16_unpack.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "int32_pack.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "int32_unpack.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "int64_pack.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "int64_unpack.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "integer-conf.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "scan_f32.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "scan_f64.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "scan_u32.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "scan_u32o.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "scan_u32x.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "scan_u64.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "scan_u64o.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "scan_u64x.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "uint16_pack.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "uint16_unpack.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "uint32_pack.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "uint32_unpack.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "uint64_pack.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "uint64_unpack.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "_byteorder.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "_byteorder.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "_float32.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "_float32.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "_float64.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "_float64.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "_int16.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "_int16.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "_int32.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "_int32.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "_int64.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "_int64.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "_sd_math.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "_sd_math.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "_sysinfo.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "_sysinfo.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "_uint16.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "_uint16.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "_uint32.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "_uint32.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "_uint64.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "_uint64.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "float32.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "float32.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "float64.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "float64.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "fmt_spec.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "fmt_spec.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "int16.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "int16.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "int32.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "int32.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "int64.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "int64.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "scan_fspec.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "scan_fspec.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "scan_spec.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "scan_spec.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "sd_math.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "sd_math.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "uint16.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "uint16.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "uint32.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "uint32.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "uint64.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "uint64.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "float32.sld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "float32.a", "libfloat32.a", ctxt_slibdir, 0, 0, 0644},
  {INST_COPY, "float64.sld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "float64.a", "libfloat64.a", ctxt_slibdir, 0, 0, 0644},
  {INST_COPY, "fmt_spec.sld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "fmt_spec.a", "libfmt_spec.a", ctxt_slibdir, 0, 0, 0644},
  {INST_COPY, "int16.sld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "int16.a", "libint16.a", ctxt_slibdir, 0, 0, 0644},
  {INST_COPY, "int32.sld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "int32.a", "libint32.a", ctxt_slibdir, 0, 0, 0644},
  {INST_COPY, "int64.sld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "int64.a", "libint64.a", ctxt_slibdir, 0, 0, 0644},
  {INST_COPY, "scan_fspec.sld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "scan_fspec.a", "libscan_fspec.a", ctxt_slibdir, 0, 0, 0644},
  {INST_COPY, "scan_spec.sld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "scan_spec.a", "libscan_spec.a", ctxt_slibdir, 0, 0, 0644},
  {INST_COPY, "uint16.sld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "uint16.a", "libuint16.a", ctxt_slibdir, 0, 0, 0644},
  {INST_COPY, "uint32.sld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "uint32.a", "libuint32.a", ctxt_slibdir, 0, 0, 0644},
  {INST_COPY, "uint64.sld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "uint64.a", "libuint64.a", ctxt_slibdir, 0, 0, 0644},
  {INST_COPY, "integer-conf.ld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "integer-conf", 0, ctxt_bindir, 0, 0, 0755},
};
unsigned long insthier_len = sizeof(insthier) / sizeof(struct install_item);
