#!/bin/sh

ninja -t clean
ninja
sudo cp libpine.so /usr/lib/
sudo cp -r ./include/pine/ /usr/include/
