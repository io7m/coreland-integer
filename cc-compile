#!/bin/sh

if [ $# -lt 1 ]
then
  echo "usage: source" 1>&2
  exit 1
fi

CC=`head -n 1 conf-cc`
if [ $? -ne 0 ]
then
  echo "fatal: could not read conf-cc" 1>&2
  exit 1
fi
CFLAGS="${CFLAGS} `head -n 1 conf-cflags 2>/dev/null`"

# read in optional flag file
if [ -f "conf-ccfflist" ]
then
  for f in `cat "conf-ccfflist"`
  do
    FLAGS=`cat $f 2>/dev/null`
    CFLAGS="${CFLAGS} ${FLAGS}"
  done
fi

out=`echo "$1" | awk -F. '{print $1}'`
src="$1"
shift

# read in optional flag file
if [ -f "${out}.iff" ]
then
  for f in `cat "${out}.iff"`
  do
    targ="`dirname $out`/`dirname $f`/`basename $f`"
    FLAGS="`cat $targ 2>/dev/null`"
    CFLAGS="${CFLAGS} ${FLAGS}"
  done
fi

exec ${CC} -o ${out}.o -c ${src} ${1+"$@"} ${CFLAGS}
