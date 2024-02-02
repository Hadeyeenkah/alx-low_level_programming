#!/bin/bash
wget -p .. https://raw.githubusercontent.com/Hadeyeenkah/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libspam.so
export LD_PRELOAD="$PWD/../libspam.so"
