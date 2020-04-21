# Install script for directory: /home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/build/libSDL2.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/build/libSDL2-2.0.so.0.12.0"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/build/libSDL2-2.0.so.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSDL2-2.0.so.0.12.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSDL2-2.0.so.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/build/libSDL2-2.0.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSDL2-2.0.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSDL2-2.0.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSDL2-2.0.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/build/libSDL2main.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2/SDL2Targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2/SDL2Targets.cmake"
         "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/build/CMakeFiles/Export/lib/cmake/SDL2/SDL2Targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2/SDL2Targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2/SDL2Targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2" TYPE FILE FILES "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/build/CMakeFiles/Export/lib/cmake/SDL2/SDL2Targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2" TYPE FILE FILES "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/build/CMakeFiles/Export/lib/cmake/SDL2/SDL2Targets-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/SDL2" TYPE FILE FILES
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/SDL2Config.cmake"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/build/SDL2ConfigVersion.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_assert.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_atomic.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_audio.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_bits.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_blendmode.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_clipboard.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_config_android.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_config_iphoneos.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_config_macosx.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_config_minimal.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_config_os2.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_config_pandora.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_config_psp.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_config_windows.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_config_winrt.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_config_wiz.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_copying.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_cpuinfo.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_egl.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_endian.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_error.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_events.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_filesystem.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_gamecontroller.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_gesture.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_haptic.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_hints.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_joystick.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_keyboard.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_keycode.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_loadso.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_log.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_main.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_messagebox.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_metal.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_mouse.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_mutex.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_name.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_opengl.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_opengl_glext.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_opengles.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_opengles2.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_opengles2_gl2.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_opengles2_gl2ext.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_opengles2_gl2platform.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_opengles2_khrplatform.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_pixels.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_platform.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_power.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_quit.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_rect.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_render.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_revision.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_rwops.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_scancode.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_sensor.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_shape.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_stdinc.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_surface.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_system.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_syswm.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_test.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_test_assert.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_test_common.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_test_compare.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_test_crc32.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_test_font.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_test_fuzzer.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_test_harness.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_test_images.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_test_log.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_test_md5.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_test_memory.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_test_random.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_thread.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_timer.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_touch.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_types.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_version.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_video.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/SDL_vulkan.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/begin_code.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/include/close_code.h"
    "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/build/include/SDL_config.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
          execute_process(COMMAND /usr/bin/cmake -E create_symlink
            "libSDL2-2.0.so" "libSDL2.so"
            WORKING_DIRECTORY "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/build")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/build/libSDL2.so")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/build/sdl2.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/build/sdl2-config")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/share/aclocal/sdl2.m4")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/share/aclocal" TYPE FILE FILES "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/sdl2.m4")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ruben/Projects/BroForce/3rdParty/SDL2-2.0.12/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
