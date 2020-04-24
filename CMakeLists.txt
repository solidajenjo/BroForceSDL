cmake_minimum_required(VERSION 3.13)  
project(BroForce)               
set(CMAKE_CXX_STANDARD 17)           
include_directories(
        "./3rdParty/SDL2-2.0.12/include"
        "./3rdParty/stb"
        "./src")

file(GLOB source_files        
        "3rdParty/stb/stb_image.h"
        "src/*.h"
        "src/*.cpp"
        "src/managers/*.h"
        "src/managers/*.cpp"
)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(BroForce ${source_files})

if(EXISTS ${CMAKE_SOURCE_DIR}/3rdParty/SDL2-2.0.12/lib/libSDL2-2.0.so)
   message("libSDL2 found")
else()
   message("libSDL2 not found")
   execute_process(
        COMMAND ${CMAKE_SOURCE_DIR}/compileLibs.sh ${CMAKE_SOURCE_DIR}      
        )
endif()

TARGET_LINK_LIBRARIES(BroForce 
        ${CMAKE_SOURCE_DIR}/3rdParty/SDL2-2.0.12/lib/libSDL2-2.0.so
        )

set (CMAKE_CXX_FLAGS "-g")
