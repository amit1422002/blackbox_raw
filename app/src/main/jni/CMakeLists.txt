cmake_minimum_required(VERSION 3.22.1)

project(guestloginhook)

add_library(guestloginhook SHARED
        GuestLoginHookLib.cpp
        fake_dlfcn.cpp
        MapsGameLibsDump.cpp
        Ue4PatternFinder.cpp)

set_target_properties(guestloginhook PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON)

target_compile_options(guestloginhook PRIVATE -fvisibility=hidden)

target_link_options(guestloginhook PRIVATE
        -Wl,--version-script=${CMAKE_CURRENT_SOURCE_DIR}/guestloginhook.map.txt)

target_link_libraries(guestloginhook log dl)
