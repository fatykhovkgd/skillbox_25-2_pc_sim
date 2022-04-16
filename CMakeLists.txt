cmake_minimum_required(VERSION 3.21)
project(pc_simulator)

set(CMAKE_CXX_STANDARD 23)

add_executable(pc_simulator main.cpp kbd/kbd.h kbd/kbd.cpp gpu/gpu.h gpu/gpu.cpp cpu/cpu.h cpu/cpu.cpp ram/ram.h ram/ram.cpp disk/disk.h disk/disk.cpp)
