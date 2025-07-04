# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/home/korn/Programming/C_Projects/Tetris/build/_deps/raylib-src")
  file(MAKE_DIRECTORY "/home/korn/Programming/C_Projects/Tetris/build/_deps/raylib-src")
endif()
file(MAKE_DIRECTORY
  "/home/korn/Programming/C_Projects/Tetris/build/_deps/raylib-build"
  "/home/korn/Programming/C_Projects/Tetris/build/_deps/raylib-subbuild/raylib-populate-prefix"
  "/home/korn/Programming/C_Projects/Tetris/build/_deps/raylib-subbuild/raylib-populate-prefix/tmp"
  "/home/korn/Programming/C_Projects/Tetris/build/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp"
  "/home/korn/Programming/C_Projects/Tetris/build/_deps/raylib-subbuild/raylib-populate-prefix/src"
  "/home/korn/Programming/C_Projects/Tetris/build/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/korn/Programming/C_Projects/Tetris/build/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/korn/Programming/C_Projects/Tetris/build/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
