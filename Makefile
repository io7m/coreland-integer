# auto generated - do not edit

default: all

all: sysdeps.out ctxt/ctxt.a float32.a float64.a fmt_spec.a \
	inst-check inst-copy inst-dir inst-link installer instchk int16.a \
	int32.a int64.a integer-conf scan_fspec.a scan_spec.a uint16.a \
	uint32.a uint64.a 

sysdeps: sysdeps.out
sysdeps.out:
	SYSDEPS/sysdep-header sysdeps.out
	(cd SYSDEPS && make)
sysdeps_clean:
	(cd SYSDEPS && make clean)
	rm -f sysdeps.out

_byteorder.h: sysdeps.out
_float32.h: sysdeps.out
_float64.h: sysdeps.out
_int16.h: sysdeps.out
_int32.h: sysdeps.out
_int64.h: sysdeps.out
libs-math: sysdeps.out
flags-math: sysdeps.out
_sd_math.h: sysdeps.out
_sysinfo.h: sysdeps.out
_uint16.h: sysdeps.out
_uint32.h: sysdeps.out
_uint64.h: sysdeps.out

cc-compile: conf-cc conf-cctype conf-cflags sysdeps.out flags-math 
cc-link: conf-ld conf-ldflags sysdeps.out libs-math 
cc-slib: conf-systype 
conf-cctype:\
	conf-systype conf-cc mk-cctype 
	./mk-cctype > conf-cctype
conf-systype:\
	mk-systype 
	./mk-systype > conf-systype
ctxt/bindir.c: mk-ctxt conf-bindir
	rm -f ctxt/bindir.c
	./mk-ctxt ctxt_bindir < conf-bindir > ctxt/bindir.c

ctxt/bindir.o:\
	cc-compile ctxt/bindir.c 
	./cc-compile ctxt/bindir.c
ctxt/ctxt.a:\
	cc-slib ctxt/ctxt.sld ctxt/bindir.o ctxt/dlibdir.o \
	ctxt/flags_math.o ctxt/incdir.o ctxt/libs_math.o ctxt/repos.o \
	ctxt/slibdir.o ctxt/version.o 
	./cc-slib ctxt/ctxt ctxt/bindir.o ctxt/dlibdir.o ctxt/flags_math.o \
	ctxt/incdir.o ctxt/libs_math.o ctxt/repos.o ctxt/slibdir.o \
	ctxt/version.o 
ctxt/dlibdir.c: mk-ctxt conf-dlibdir
	rm -f ctxt/dlibdir.c
	./mk-ctxt ctxt_dlibdir < conf-dlibdir > ctxt/dlibdir.c

ctxt/dlibdir.o:\
	cc-compile ctxt/dlibdir.c 
	./cc-compile ctxt/dlibdir.c
ctxt/flags_math.c: mk-ctxt flags-math
	rm -f ctxt/flags_math.c
	./mk-ctxt ctxt_flags_math < flags-math > ctxt/flags_math.c

ctxt/flags_math.o:\
	cc-compile ctxt/flags_math.c 
	./cc-compile ctxt/flags_math.c
ctxt/incdir.c: mk-ctxt conf-incdir
	rm -f ctxt/incdir.c
	./mk-ctxt ctxt_incdir < conf-incdir > ctxt/incdir.c

ctxt/incdir.o:\
	cc-compile ctxt/incdir.c 
	./cc-compile ctxt/incdir.c
ctxt/libs_math.c: mk-ctxt libs-math
	rm -f ctxt/libs_math.c
	./mk-ctxt ctxt_libs_math < libs-math > ctxt/libs_math.c

ctxt/libs_math.o:\
	cc-compile ctxt/libs_math.c 
	./cc-compile ctxt/libs_math.c
ctxt/repos.c: mk-ctxt conf-repos
	rm -f ctxt/repos.c
	./mk-ctxt ctxt_repos < conf-repos > ctxt/repos.c

ctxt/repos.o:\
	cc-compile ctxt/repos.c 
	./cc-compile ctxt/repos.c
ctxt/slibdir.c: mk-ctxt conf-slibdir
	rm -f ctxt/slibdir.c
	./mk-ctxt ctxt_slibdir < conf-slibdir > ctxt/slibdir.c

ctxt/slibdir.o:\
	cc-compile ctxt/slibdir.c 
	./cc-compile ctxt/slibdir.c
ctxt/version.c: mk-ctxt VERSION
	rm -f ctxt/version.c
	./mk-ctxt ctxt_version < VERSION > ctxt/version.c

ctxt/version.o:\
	cc-compile ctxt/version.c 
	./cc-compile ctxt/version.c
float32.a:\
	cc-slib float32.sld float32_pack.o float32_upack.o 
	./cc-slib float32 float32_pack.o float32_upack.o 
float32_pack.o:\
	cc-compile float32_pack.c _byteorder.h float32.h 
	./cc-compile float32_pack.c
float32_upack.o:\
	cc-compile float32_upack.c _byteorder.h float32.h 
	./cc-compile float32_upack.c
float64.a:\
	cc-slib float64.sld float64_pack.o float64_upack.o 
	./cc-slib float64 float64_pack.o float64_upack.o 
float64_pack.o:\
	cc-compile float64_pack.c _byteorder.h float64.h 
	./cc-compile float64_pack.c
float64_upack.o:\
	cc-compile float64_upack.c _byteorder.h float64.h 
	./cc-compile float64_upack.c
fmt_spec.a:\
	cc-slib fmt_spec.sld fmt_u32.o fmt_u32b.o fmt_u32o.o fmt_u32x.o \
	fmt_u64.o fmt_u64b.o fmt_u64o.o fmt_u64x.o 
	./cc-slib fmt_spec fmt_u32.o fmt_u32b.o fmt_u32o.o fmt_u32x.o \
	fmt_u64.o fmt_u64b.o fmt_u64o.o fmt_u64x.o 
fmt_u32.o:\
	cc-compile fmt_u32.c fmt_spec.h uint32.h uint64.h 
	./cc-compile fmt_u32.c
fmt_u32b.o:\
	cc-compile fmt_u32b.c fmt_spec.h uint32.h uint64.h 
	./cc-compile fmt_u32b.c
fmt_u32o.o:\
	cc-compile fmt_u32o.c fmt_spec.h uint32.h uint64.h 
	./cc-compile fmt_u32o.c
fmt_u32x.o:\
	cc-compile fmt_u32x.c fmt_spec.h uint32.h uint64.h 
	./cc-compile fmt_u32x.c
fmt_u64.o:\
	cc-compile fmt_u64.c fmt_spec.h uint64.h 
	./cc-compile fmt_u64.c
fmt_u64b.o:\
	cc-compile fmt_u64b.c fmt_spec.h uint64.h 
	./cc-compile fmt_u64b.c
fmt_u64o.o:\
	cc-compile fmt_u64o.c fmt_spec.h uint64.h 
	./cc-compile fmt_u64o.c
fmt_u64x.o:\
	cc-compile fmt_u64x.c fmt_spec.h uint64.h 
	./cc-compile fmt_u64x.c
inst-check:\
	cc-link inst-check.ld inst-check.o install_error.o 
	./cc-link inst-check inst-check.o install_error.o 
inst-check.o:\
	cc-compile inst-check.c install.h 
	./cc-compile inst-check.c
inst-copy:\
	cc-link inst-copy.ld inst-copy.o install_error.o 
	./cc-link inst-copy inst-copy.o install_error.o 
inst-copy.o:\
	cc-compile inst-copy.c install.h 
	./cc-compile inst-copy.c
inst-dir:\
	cc-link inst-dir.ld inst-dir.o install_error.o 
	./cc-link inst-dir inst-dir.o install_error.o 
inst-dir.o:\
	cc-compile inst-dir.c install.h 
	./cc-compile inst-dir.c
inst-link:\
	cc-link inst-link.ld inst-link.o install_error.o 
	./cc-link inst-link inst-link.o install_error.o 
inst-link.o:\
	cc-compile inst-link.c install.h 
	./cc-compile inst-link.c
install_core.o:\
	cc-compile install_core.c install.h 
	./cc-compile install_core.c
install_error.o:\
	cc-compile install_error.c install.h 
	./cc-compile install_error.c
installer:\
	cc-link installer.ld installer.o insthier.o install_core.o \
	install_error.o ctxt/ctxt.a 
	./cc-link installer installer.o insthier.o install_core.o \
	install_error.o ctxt/ctxt.a 
installer.o:\
	cc-compile installer.c install.h 
	./cc-compile installer.c
instchk:\
	cc-link instchk.ld instchk.o insthier.o install_core.o \
	install_error.o ctxt/ctxt.a 
	./cc-link instchk instchk.o insthier.o install_core.o \
	install_error.o ctxt/ctxt.a 
instchk.o:\
	cc-compile instchk.c install.h 
	./cc-compile instchk.c
insthier.o:\
	cc-compile insthier.c install.h ctxt.h 
	./cc-compile insthier.c
int16.a:\
	cc-slib int16.sld int16_pack.o int16_unpack.o 
	./cc-slib int16 int16_pack.o int16_unpack.o 
int16_pack.o:\
	cc-compile int16_pack.c int16.h 
	./cc-compile int16_pack.c
int16_unpack.o:\
	cc-compile int16_unpack.c int16.h 
	./cc-compile int16_unpack.c
int32.a:\
	cc-slib int32.sld int32_pack.o int32_unpack.o 
	./cc-slib int32 int32_pack.o int32_unpack.o 
int32_pack.o:\
	cc-compile int32_pack.c int32.h 
	./cc-compile int32_pack.c
int32_unpack.o:\
	cc-compile int32_unpack.c int32.h 
	./cc-compile int32_unpack.c
int64.a:\
	cc-slib int64.sld int64_pack.o int64_unpack.o 
	./cc-slib int64 int64_pack.o int64_unpack.o 
int64_pack.o:\
	cc-compile int64_pack.c int64.h 
	./cc-compile int64_pack.c
int64_unpack.o:\
	cc-compile int64_unpack.c int64.h 
	./cc-compile int64_unpack.c
integer-conf:\
	cc-link integer-conf.ld integer-conf.o ctxt/ctxt.a 
	./cc-link integer-conf integer-conf.o ctxt/ctxt.a 
integer-conf.o:\
	cc-compile integer-conf.c ctxt.h 
	./cc-compile integer-conf.c
mk-cctype: conf-cc conf-systype 
mk-ctxt.o:\
	cc-compile mk-ctxt.c
	./cc-compile mk-ctxt.c
mk-ctxt:\
	cc-link mk-ctxt.o mk-ctxt.ld
	./cc-link mk-ctxt mk-ctxt.o
mk-systype: conf-cc 
scan_f32.o:\
	cc-compile scan_f32.c scan_fspec.h sd_math.h 
	./cc-compile scan_f32.c
scan_f64.o:\
	cc-compile scan_f64.c scan_fspec.h 
	./cc-compile scan_f64.c
scan_fspec.a:\
	cc-slib scan_fspec.sld scan_f32.o scan_f64.o 
	./cc-slib scan_fspec scan_f32.o scan_f64.o 
scan_spec.a:\
	cc-slib scan_spec.sld scan_u32.o scan_u32o.o scan_u32x.o scan_u64.o \
	scan_u64o.o scan_u64x.o 
	./cc-slib scan_spec scan_u32.o scan_u32o.o scan_u32x.o scan_u64.o \
	scan_u64o.o scan_u64x.o 
scan_u32.o:\
	cc-compile scan_u32.c scan_spec.h uint32.h uint64.h 
	./cc-compile scan_u32.c
scan_u32o.o:\
	cc-compile scan_u32o.c scan_spec.h uint32.h uint64.h 
	./cc-compile scan_u32o.c
scan_u32x.o:\
	cc-compile scan_u32x.c scan_spec.h uint32.h uint64.h 
	./cc-compile scan_u32x.c
scan_u64.o:\
	cc-compile scan_u64.c scan_spec.h uint64.h 
	./cc-compile scan_u64.c
scan_u64o.o:\
	cc-compile scan_u64o.c scan_spec.h uint64.h 
	./cc-compile scan_u64o.c
scan_u64x.o:\
	cc-compile scan_u64x.c scan_spec.h uint64.h 
	./cc-compile scan_u64x.c
uint16.a:\
	cc-slib uint16.sld uint16_pack.o uint16_unpack.o 
	./cc-slib uint16 uint16_pack.o uint16_unpack.o 
uint16_pack.o:\
	cc-compile uint16_pack.c uint16.h 
	./cc-compile uint16_pack.c
uint16_unpack.o:\
	cc-compile uint16_unpack.c uint16.h 
	./cc-compile uint16_unpack.c
uint32.a:\
	cc-slib uint32.sld uint32_pack.o uint32_unpack.o 
	./cc-slib uint32 uint32_pack.o uint32_unpack.o 
uint32_pack.o:\
	cc-compile uint32_pack.c uint32.h 
	./cc-compile uint32_pack.c
uint32_unpack.o:\
	cc-compile uint32_unpack.c uint32.h 
	./cc-compile uint32_unpack.c
uint64.a:\
	cc-slib uint64.sld uint64_pack.o uint64_unpack.o 
	./cc-slib uint64 uint64_pack.o uint64_unpack.o 
uint64_pack.o:\
	cc-compile uint64_pack.c uint64.h 
	./cc-compile uint64_pack.c
uint64_unpack.o:\
	cc-compile uint64_unpack.c uint64.h 
	./cc-compile uint64_unpack.c
clean-all: sysdeps_clean tests_clean obj_clean 
clean: obj_clean
obj_clean: 
	rm -f conf-cctype conf-systype ctxt/bindir.c ctxt/bindir.o \
	ctxt/ctxt.a ctxt/dlibdir.c ctxt/dlibdir.o ctxt/flags_math.c \
	ctxt/flags_math.o ctxt/incdir.c ctxt/incdir.o ctxt/libs_math.c \
	ctxt/libs_math.o ctxt/repos.c ctxt/repos.o ctxt/slibdir.c \
	ctxt/slibdir.o ctxt/version.c ctxt/version.o float32.a \
	float32_pack.o float32_upack.o float64.a float64_pack.o \
	float64_upack.o fmt_spec.a fmt_u32.o fmt_u32b.o fmt_u32o.o \
	fmt_u32x.o fmt_u64.o fmt_u64b.o fmt_u64o.o fmt_u64x.o inst-check \
	inst-check.o inst-copy inst-copy.o inst-dir inst-dir.o inst-link \
	inst-link.o install_core.o install_error.o installer installer.o \
	instchk instchk.o insthier.o int16.a int16_pack.o int16_unpack.o \
	int32.a int32_pack.o int32_unpack.o int64.a int64_pack.o \
	int64_unpack.o integer-conf integer-conf.o mk-ctxt mk-ctxt.o \
	scan_f32.o scan_f64.o 
	rm -f scan_fspec.a scan_spec.a scan_u32.o scan_u32o.o scan_u32x.o \
	scan_u64.o scan_u64o.o scan_u64x.o uint16.a uint16_pack.o \
	uint16_unpack.o uint32.a uint32_pack.o uint32_unpack.o uint64.a \
	uint64_pack.o uint64_unpack.o 

deinstall: deinstaller inst-check inst-copy inst-dir inst-link
	./deinstaller
deinstall-dryrun: deinstaller inst-check inst-copy inst-dir inst-link
	./deinstaller dryrun
install: installer inst-check inst-copy inst-dir inst-link postinstall
	./installer
	./postinstall

install-dryrun: installer inst-check inst-copy inst-dir inst-link
	./installer dryrun
install-check: instchk inst-check
	./instchk
tests:
	(cd UNIT_TESTS; make && make tests)
tests_clean:
	(cd UNIT_TESTS; make clean)
regen:
	cpj-genmk > Makefile.tmp && mv Makefile.tmp Makefile

