# 601cmake_toolchain_arm/linux_arm_toolchain.cmake
# cmake -S . -B build -DCMAKE_TOOLCHAIN_FILE=linux_arm_toolchain.cmake
set(CMAKE_SYSTEM_NAME Linux)

# 安装工具链
# tar -xvf gcc-linaro-7.3.1-2018.05-x86_64_aarch64-linux-gnu.tar.xz
# /home/xcj/code/tools/gcc-linaro-7.3.1-2018.05-x86_64_aarch64-linux-gnu/bin
set(tools /home/xcj/code/tools/gcc-linaro-7.3.1-2018.05-x86_64_aarch64-linux-gnu)
set(CMAKE_C_COMPILER ${tools}/bin/aarch64-linux-gnu-gcc)
set(CMAKE_CXX_COMPILER ${tools}/bin/aarch64-linux-gnu-g++)
