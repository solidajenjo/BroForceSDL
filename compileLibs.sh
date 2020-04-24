#!/bin/bash
pushd $1/3rdParty/SDL2-2.0.12/
rm -rf build
mkdir build
cd build
cmake ..
make
cp libSDL2-2*.* ../lib/
popd



