#!/bin/bash
wget -qP /tmp/ https://github.com/Sonlowami/alx-low_level_programming/blob/main/0x18-dynamic_libraries/override.so
export LD_PRELOAD="/tmp/override.so"
