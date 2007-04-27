default: sysdeps
clean: sysdeps_clean

sysdeps:  sd_int16 sd_int32 sd_int64 sd_uint16 sd_uint32 sd_uint64 sd_sd-math sd_float32 sd_float64 sd_byteorder sd_sysinfo
sysdeps_clean:  sd_int16_clean sd_int32_clean sd_int64_clean sd_uint16_clean sd_uint32_clean sd_uint64_clean sd_sd-math_clean sd_float32_clean sd_float64_clean sd_byteorder_clean sd_sysinfo_clean

sd_int16:
	@(cd modules/int16 && ./run)
sd_int16_clean:
	@(cd modules/int16 && ./clean)

sd_int32:
	@(cd modules/int32 && ./run)
sd_int32_clean:
	@(cd modules/int32 && ./clean)

sd_int64:
	@(cd modules/int64 && ./run)
sd_int64_clean:
	@(cd modules/int64 && ./clean)

sd_uint16:
	@(cd modules/uint16 && ./run)
sd_uint16_clean:
	@(cd modules/uint16 && ./clean)

sd_uint32:
	@(cd modules/uint32 && ./run)
sd_uint32_clean:
	@(cd modules/uint32 && ./clean)

sd_uint64:
	@(cd modules/uint64 && ./run)
sd_uint64_clean:
	@(cd modules/uint64 && ./clean)

sd_sd-math:
	@(cd modules/sd-math && ./run)
sd_sd-math_clean:
	@(cd modules/sd-math && ./clean)

sd_float32:
	@(cd modules/float32 && ./run)
sd_float32_clean:
	@(cd modules/float32 && ./clean)

sd_float64:
	@(cd modules/float64 && ./run)
sd_float64_clean:
	@(cd modules/float64 && ./clean)

sd_byteorder:
	@(cd modules/byteorder && ./run)
sd_byteorder_clean:
	@(cd modules/byteorder && ./clean)

sd_sysinfo:
	@(cd modules/sysinfo && ./run)
sd_sysinfo_clean:
	@(cd modules/sysinfo && ./clean)

regen:
	./gen-makefile > Makefile.tmp
	mv Makefile.tmp Makefile
