#!/bin/bash
wget -P /tmp https://github.com/debbie-ana/alx-low_level_programming/raw/master/0x18-dynamic_libraries/101-lib.so
export LD_PRELOAD=/tmp/101-lib.so
