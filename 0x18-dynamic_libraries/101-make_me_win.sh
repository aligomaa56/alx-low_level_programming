#!/bin/bash
wget -P /home/ali/alx/alx-low_level_programming/0x18-dynamic_libraries https://github.com/aligomaa56/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD=/home/ali/alx/alx-low_level_programming/0x18-dynamic_libraries/libgiga.so
