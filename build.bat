mkdir build 2> NUL
cd build
call conan install .. -s compiler=clang-cl -s arch=x86_64
call cmake .. -GNinja
cd ..
call ninja -C build