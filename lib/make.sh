#!/bin/sh

set -x

cd lua-tree-sitter
cp ../lxl_init.c src

make ${@:1} 'LUA_INC=-I../include -I../lite-xl/resources/include' LUA_LDFLAGS= POSIX_LDFLAGS=

rm src/lxl_init.c
