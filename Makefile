# auto generated - do not edit

default: all

all:\
ctxt/ctxt.a float32.a float64.a fmt_spec.a inst-check inst-copy inst-dir \
inst-link installer instchk int16.a int32.a int64.a integer-conf \
scan_fspec.a scan_spec.a sysinfo uint16.a uint32.a uint64.a 

# -- SYSDEPS start
_byteorder.h:
	@echo SYSDEPS byteorder run create _byteorder.h 
	@(cd SYSDEPS/modules/byteorder && ./run)
_float32.h:
	@echo SYSDEPS float32 run create _float32.h 
	@(cd SYSDEPS/modules/float32 && ./run)
_float64.h:
	@echo SYSDEPS float64 run create _float64.h 
	@(cd SYSDEPS/modules/float64 && ./run)
_int16.h:
	@echo SYSDEPS int16 run create _int16.h 
	@(cd SYSDEPS/modules/int16 && ./run)
_int32.h:
	@echo SYSDEPS int32 run create _int32.h 
	@(cd SYSDEPS/modules/int32 && ./run)
_int64.h:
	@echo SYSDEPS int64 run create _int64.h 
	@(cd SYSDEPS/modules/int64 && ./run)
libs-math:
	@echo SYSDEPS sd-math run create _sd_math.h flags-math libs-math 
	@(cd SYSDEPS/modules/sd-math && ./run)
flags-math: libs-math
_sd_math.h: libs-math
_sysinfo.h:
	@echo SYSDEPS sysinfo run create _sysinfo.h 
	@(cd SYSDEPS/modules/sysinfo && ./run)
_uint16.h:
	@echo SYSDEPS uint16 run create _uint16.h 
	@(cd SYSDEPS/modules/uint16 && ./run)
_uint32.h:
	@echo SYSDEPS uint32 run create _uint32.h 
	@(cd SYSDEPS/modules/uint32 && ./run)
_uint64.h:
	@echo SYSDEPS uint64 run create _uint64.h 
	@(cd SYSDEPS/modules/uint64 && ./run)


byteorder_clean:
	@echo SYSDEPS byteorder clean _byteorder.h 
	@(cd SYSDEPS/modules/byteorder && ./clean)
float32_clean:
	@echo SYSDEPS float32 clean _float32.h 
	@(cd SYSDEPS/modules/float32 && ./clean)
float64_clean:
	@echo SYSDEPS float64 clean _float64.h 
	@(cd SYSDEPS/modules/float64 && ./clean)
int16_clean:
	@echo SYSDEPS int16 clean _int16.h 
	@(cd SYSDEPS/modules/int16 && ./clean)
int32_clean:
	@echo SYSDEPS int32 clean _int32.h 
	@(cd SYSDEPS/modules/int32 && ./clean)
int64_clean:
	@echo SYSDEPS int64 clean _int64.h 
	@(cd SYSDEPS/modules/int64 && ./clean)
sd-math_clean:
	@echo SYSDEPS sd-math clean _sd_math.h flags-math libs-math 
	@(cd SYSDEPS/modules/sd-math && ./clean)
sysinfo_clean:
	@echo SYSDEPS sysinfo clean _sysinfo.h 
	@(cd SYSDEPS/modules/sysinfo && ./clean)
uint16_clean:
	@echo SYSDEPS uint16 clean _uint16.h 
	@(cd SYSDEPS/modules/uint16 && ./clean)
uint32_clean:
	@echo SYSDEPS uint32 clean _uint32.h 
	@(cd SYSDEPS/modules/uint32 && ./clean)
uint64_clean:
	@echo SYSDEPS uint64 clean _uint64.h 
	@(cd SYSDEPS/modules/uint64 && ./clean)


sysdeps_clean:\
byteorder_clean \
float32_clean \
float64_clean \
int16_clean \
int32_clean \
int64_clean \
sd-math_clean \
sysinfo_clean \
uint16_clean \
uint32_clean \
uint64_clean \


# -- SYSDEPS end

cc-compile:\
conf-cc conf-cctype conf-systype conf-cflags flags-math 

cc-link:\
conf-ld conf-ldtype conf-systype conf-ldflags libs-math 

cc-slib:\
conf-systype 

conf-cctype:\
conf-systype conf-cc mk-cctype 
	./mk-cctype > conf-cctype.tmp && mv conf-cctype.tmp conf-cctype

conf-ldtype:\
conf-systype conf-ld conf-cctype mk-ldtype 
	./mk-ldtype > conf-ldtype.tmp && mv conf-ldtype.tmp conf-ldtype

conf-sosuffix:\
mk-sosuffix 
	./mk-sosuffix > conf-sosuffix.tmp && mv conf-sosuffix.tmp \
	conf-sosuffix

conf-systype:\
mk-systype 
	./mk-systype > conf-systype.tmp && mv conf-systype.tmp conf-systype

ctxt/bindir.c: mk-ctxt conf-bindir
	rm -f ctxt/bindir.c
	./mk-ctxt ctxt_bindir < conf-bindir > ctxt/bindir.c

ctxt/bindir.o:\
cc-compile ctxt/bindir.c 
	./cc-compile ctxt/bindir.c

ctxt/ctxt.a:\
cc-slib ctxt/ctxt.sld ctxt/bindir.o ctxt/dlibdir.o ctxt/flags_math.o \
ctxt/incdir.o ctxt/libs_math.o ctxt/repos.o ctxt/slibdir.o ctxt/version.o 
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

float32.h:\
_float32.h 

float32_pack.o:\
cc-compile float32_pack.c _byteorder.h float32.h 
	./cc-compile float32_pack.c

float32_upack.o:\
cc-compile float32_upack.c _byteorder.h float32.h 
	./cc-compile float32_upack.c

float64.a:\
cc-slib float64.sld float64_pack.o float64_upack.o 
	./cc-slib float64 float64_pack.o float64_upack.o 

float64.h:\
_float64.h 

float64_pack.o:\
cc-compile float64_pack.c _byteorder.h float64.h 
	./cc-compile float64_pack.c

float64_upack.o:\
cc-compile float64_upack.c _byteorder.h float64.h 
	./cc-compile float64_upack.c

fmt_fspec.h:\
float32.h float64.h 

fmt_spec.a:\
cc-slib fmt_spec.sld fmt_u32.o fmt_u32b.o fmt_u32o.o fmt_u32x.o fmt_u64.o \
fmt_u64b.o fmt_u64o.o fmt_u64x.o 
	./cc-slib fmt_spec fmt_u32.o fmt_u32b.o fmt_u32o.o fmt_u32x.o \
	fmt_u64.o fmt_u64b.o fmt_u64o.o fmt_u64x.o 

fmt_spec.h:\
uint32.h uint64.h 

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
cc-link installer.ld installer.o insthier.o install_core.o install_error.o \
ctxt/ctxt.a 
	./cc-link installer installer.o insthier.o install_core.o \
	install_error.o ctxt/ctxt.a 

installer.o:\
cc-compile installer.c install.h 
	./cc-compile installer.c

instchk:\
cc-link instchk.ld instchk.o insthier.o install_core.o install_error.o \
ctxt/ctxt.a 
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

int16.h:\
_int16.h 

int16_pack.o:\
cc-compile int16_pack.c int16.h 
	./cc-compile int16_pack.c

int16_unpack.o:\
cc-compile int16_unpack.c int16.h 
	./cc-compile int16_unpack.c

int32.a:\
cc-slib int32.sld int32_pack.o int32_unpack.o 
	./cc-slib int32 int32_pack.o int32_unpack.o 

int32.h:\
_int32.h 

int32_pack.o:\
cc-compile int32_pack.c int32.h 
	./cc-compile int32_pack.c

int32_unpack.o:\
cc-compile int32_unpack.c int32.h 
	./cc-compile int32_unpack.c

int64.a:\
cc-slib int64.sld int64_pack.o int64_unpack.o 
	./cc-slib int64 int64_pack.o int64_unpack.o 

int64.h:\
_int64.h 

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

mk-cctype:\
conf-cc conf-systype 

mk-ctxt:\
mk-mk-ctxt 
	./mk-mk-ctxt

mk-ldtype:\
conf-cctype conf-systype 

mk-mk-ctxt:\
conf-cc 

mk-sosuffix:\
conf-systype 

mk-systype:\
conf-cc 

scan_f32.o:\
cc-compile scan_f32.c scan_fspec.h sd_math.h 
	./cc-compile scan_f32.c

scan_f64.o:\
cc-compile scan_f64.c scan_fspec.h 
	./cc-compile scan_f64.c

scan_fspec.a:\
cc-slib scan_fspec.sld scan_f32.o scan_f64.o 
	./cc-slib scan_fspec scan_f32.o scan_f64.o 

scan_fspec.h:\
float32.h float64.h 

scan_spec.a:\
cc-slib scan_spec.sld scan_u32.o scan_u32o.o scan_u32x.o scan_u64.o \
scan_u64o.o scan_u64x.o 
	./cc-slib scan_spec scan_u32.o scan_u32o.o scan_u32x.o scan_u64.o \
	scan_u64o.o scan_u64x.o 

scan_spec.h:\
uint32.h uint64.h 

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

sd_math.h:\
_sd_math.h 

sysinfo:\
cc-link sysinfo.ld sysinfo.o 
	./cc-link sysinfo sysinfo.o 

sysinfo.o:\
cc-compile sysinfo.c _sysinfo.h 
	./cc-compile sysinfo.c

uint16.a:\
cc-slib uint16.sld uint16_pack.o uint16_unpack.o 
	./cc-slib uint16 uint16_pack.o uint16_unpack.o 

uint16.h:\
_uint16.h 

uint16_pack.o:\
cc-compile uint16_pack.c uint16.h 
	./cc-compile uint16_pack.c

uint16_unpack.o:\
cc-compile uint16_unpack.c uint16.h 
	./cc-compile uint16_unpack.c

uint32.a:\
cc-slib uint32.sld uint32_pack.o uint32_unpack.o 
	./cc-slib uint32 uint32_pack.o uint32_unpack.o 

uint32.h:\
_uint32.h 

uint32_pack.o:\
cc-compile uint32_pack.c uint32.h 
	./cc-compile uint32_pack.c

uint32_unpack.o:\
cc-compile uint32_unpack.c uint32.h 
	./cc-compile uint32_unpack.c

uint64.a:\
cc-slib uint64.sld uint64_pack.o uint64_unpack.o 
	./cc-slib uint64 uint64_pack.o uint64_unpack.o 

uint64.h:\
_uint64.h 

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
	int64_unpack.o integer-conf integer-conf.o scan_f32.o scan_f64.o \
	scan_fspec.a scan_spec.a 
	rm -f scan_u32.o scan_u32o.o scan_u32x.o scan_u64.o scan_u64o.o \
	scan_u64x.o sysinfo sysinfo.o uint16.a uint16_pack.o uint16_unpack.o \
	uint32.a uint32_pack.o uint32_unpack.o uint64.a uint64_pack.o \
	uint64_unpack.o 

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

