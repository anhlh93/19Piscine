#!/bin/sh
find -name '*.sh' -printf '%f\n' | cut -f 1 -d '.'
