cmake_minimum_required(VERSION 3.13)  
project(BroForce)               
set(CMAKE_CXX_STANDARD 14)           
include_directories(
        "./3rdParty/SDL2-2.0.12/include"
        "./3rdParty/SDL2_image-2.0.5"
        "./src")

file(GLOB source_files
        "src/*.h"
        "src/*.cpp"
        "src/managers/*.h"
        "src/managers/*.cpp"
        "3rdParty/SDL2_image-2.0.5/SDL_image.h"
)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(BroForce ${source_files})

TARGET_LINK_LIBRARIES(BroForce 
        ${CMAKE_SOURCE_DIR}/3rdParty/SDL2-2.0.12/lib/libSDL2-2.0.so
        ${CMAKE_SOURCE_DIR}/3rdParty/SDL2_image-2.0.5/lib/libSDL2_image.so)

set (CMAKE_CXX_FLAGS "-g")
