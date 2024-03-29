#!/bin/bash
wget -P .. https://raw.githubusercontent.com/MizMelly/alx-low_level_programming/master/0x18-dynamic_libraries/libjack.so
export LD_PRELOAD="$PWD/../libjack.so"
