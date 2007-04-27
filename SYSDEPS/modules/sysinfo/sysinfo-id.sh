#!/bin/sh

if [ ! -f "_sysinfo.h" ]
then
  echo "fatal: could not open _sysinfo.h" 1>&2
  exit 112
fi

os=`grep 'SYS_OS ' _sysinfo.h \
 | sed -e 's/SYS_OS_//g' | awk '{print $NF}'`
ver=`grep 'SYS_OSVERSION ' _sysinfo.h \
 | sed -e 's/SYS_OSVERSION_//g' | awk '{print $NF}'`
cc=`grep 'SYS_CCTYPE ' _sysinfo.h \
 | sed -e 's/SYS_CCTYPE_//g' | awk '{print $NF}'`
ccver=`grep 'SYS_CCVERSION ' _sysinfo.h \
 | sed -e 's/SYS_CCVERSION//g' | awk '{print $NF}'`
arch=`grep 'SYS_ARCH ' _sysinfo.h \
 | sed -e 's/SYS_ARCH_//g' | awk '{print $NF}'`

printf "%s %s %s %s %s\n" "${os}" "${ver}" "${cc}" "${ccver}" "${arch}" \
  | tr [A-Z] [a-z] | sed -e 's/"//g'
