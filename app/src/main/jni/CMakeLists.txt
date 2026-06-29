cmake_minimum_required(VERSION 3.22.1)

project(anubis_native)

get_filename_component(ESP_CORE "${CMAKE_CURRENT_SOURCE_DIR}/esp_core" ABSOLUTE)

# --- BGMI guest login / skin / gamemod hook ---
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

# --- Farlight 84 ESP: native memory reader + Java canvas overlay ---
set(FARLIGHT_ESP_SOURCES
        farlightesp/FarlightEspHookLib.cpp
        farlightesp/FarlightEspReader.cpp
        farlightesp/FarlightEspSocketClient.cpp)

add_library(farlightesp SHARED ${FARLIGHT_ESP_SOURCES})

set_target_properties(farlightesp PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON)

target_compile_options(farlightesp PRIVATE -fvisibility=hidden)

target_include_directories(farlightesp PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/esp_protocol
        ${ESP_CORE}
        ${ESP_CORE}/Header
        ${ESP_CORE}/Main)

target_link_options(farlightesp PRIVATE
        -Wl,--version-script=${CMAKE_CURRENT_SOURCE_DIR}/farlightesp.map.txt)

target_link_libraries(farlightesp log dl)
