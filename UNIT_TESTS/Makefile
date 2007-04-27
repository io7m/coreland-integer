# auto generated - do not edit

default: all

all: local t_fmt_spec t_int t_scan_fspe1 t_scan_fspe2 t_scan_spec \
	t_uint1 

cc-compile: conf-cc conf-cctype conf-cflags flags-math 
cc-link: conf-ld libs-math 
t_assert.o:\
	cc-compile t_assert.c t_assert.h 
	./cc-compile t_assert.c
t_fmt_spec:\
	cc-link t_fmt_spec.ld t_fmt_spec.o ../fmt_spec.a t_assert.o 
	./cc-link t_fmt_spec t_fmt_spec.o ../fmt_spec.a t_assert.o 
t_fmt_spec.o:\
	cc-compile t_fmt_spec.c ../fmt_spec.h t_assert.h 
	./cc-compile t_fmt_spec.c
t_int:\
	cc-link t_int.ld t_int.o ../int16.a ../int32.a ../int64.a \
	t_assert.o 
	./cc-link t_int t_int.o ../int16.a ../int32.a ../int64.a t_assert.o 
t_int.o:\
	cc-compile t_int.c ../int16.h ../int32.h ../int64.h t_assert.h 
	./cc-compile t_int.c
t_scan_fspe1:\
	cc-link t_scan_fspe1.ld t_scan_fspe1.o ../scan_fspec.a t_assert.o 
	./cc-link t_scan_fspe1 t_scan_fspe1.o ../scan_fspec.a t_assert.o 
t_scan_fspe1.o:\
	cc-compile t_scan_fspe1.c ../scan_fspec.h 
	./cc-compile t_scan_fspe1.c
t_scan_fspe2:\
	cc-link t_scan_fspe2.ld t_scan_fspe2.o ../scan_fspec.a t_assert.o 
	./cc-link t_scan_fspe2 t_scan_fspe2.o ../scan_fspec.a t_assert.o 
t_scan_fspe2.o:\
	cc-compile t_scan_fspe2.c ../scan_fspec.h 
	./cc-compile t_scan_fspe2.c
t_scan_spec:\
	cc-link t_scan_spec.ld t_scan_spec.o ../scan_spec.a t_assert.o 
	./cc-link t_scan_spec t_scan_spec.o ../scan_spec.a t_assert.o 
t_scan_spec.o:\
	cc-compile t_scan_spec.c ../scan_spec.h ../uint32.h ../uint64.h 
	./cc-compile t_scan_spec.c
t_uint1:\
	cc-link t_uint1.ld t_uint1.o ../uint16.a ../uint32.a ../uint64.a \
	t_assert.o 
	./cc-link t_uint1 t_uint1.o ../uint16.a ../uint32.a ../uint64.a \
	t_assert.o 
t_uint1.o:\
	cc-compile t_uint1.c ../uint16.h ../uint32.h ../uint64.h t_assert.h 
	./cc-compile t_uint1.c
clean-all: tests_clean local_clean obj_clean 
clean: obj_clean
obj_clean: 
	rm -f t_assert.o t_fmt_spec t_fmt_spec.o t_int t_int.o t_scan_fspe1 \
	t_scan_fspe1.o t_scan_fspe2 t_scan_fspe2.o t_scan_spec t_scan_spec.o \
	t_uint1 t_uint1.o 

tests: list_tests run_tests
tests_clean:
	rm -f testlist

list_tests:
	./list-tests > testlist

run_tests:
	./run-tests -v
local:
local_clean:
	rm -f cc-compile cc-link conf-cc conf-cctype conf-systype \
	conf-ld libs-math flags-math

cc-compile: ../cc-compile conf-cctype conf-cc
	rm -f cc-compile
	ln -s ../cc-compile cc-compile

cc-link: ../cc-link conf-ld conf-ldfflist libs-math
	rm -f cc-link
	ln -s ../cc-link cc-link

conf-cc: ../conf-cc
	rm -f conf-cc
	ln -s ../conf-cc conf-cc

conf-cctype: ../conf-cctype
	rm -f conf-cctype
	ln -s ../conf-cctype conf-cctype

conf-systype: ../conf-systype
	rm -f conf-systype
	ln -s ../conf-systype conf-systype

conf-ld: ../conf-ld
	rm -f conf-ld
	ln -s ../conf-ld conf-ld

libs-math: ../libs-math
	rm -f libs-math
	ln -s ../libs-math libs-math

flags-math: ../flags-math
	rm -f flags-math
	ln -s ../flags-math flags-math
regen:
	cpj-genmk > Makefile.tmp && mv Makefile.tmp Makefile

