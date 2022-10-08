#!/bin/bash
wget https://github.com/Sonlowami/alx-low_level_programming/tree/main/0x18-dynamic_libraries/override.so
export LD_PRELOAD='./override.so:$LD_PRELOAD'
