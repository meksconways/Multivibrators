cmake_minimum_required(VERSION 3.14)
project(Multivibrators)

set(CMAKE_CXX_STANDARD 14)

add_executable(Multivibrators main.cpp cmake-build-debug/DevreElemani.h devreelemani/DevreElemani.cpp devreelemani/DevreElemani.h devre/Devre.cpp devre/Devre.h eleman/Eleman.cpp eleman/Eleman.h konum/Konum.cpp konum/Konum.h eleman/ElemanTurleri.h)