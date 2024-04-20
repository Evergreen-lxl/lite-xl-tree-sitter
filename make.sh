#!/bin/sh

set -x

cd lua-tree-sitter
cp ../lxl_init.c src

make "${@}" \
    'LUA_INC=-I../include -I../lite-xl/resources/include -I../pragtical/resources/include' \
    LUA_LDFLAGS= POSIX_LDFLAGS=

rm src/lxl_init.c
