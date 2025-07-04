# My Simple CMAKE raylib Template
This is my basic CMAKE raylib template. It should be able to work on all IDEs
however it's best to test yourself and tweak it to your liking. Use this as a starting
point to make your own CMAKE template


### Converting C++ to C and vice versa
Changing it to compile C is very simple you just have to change these lines

```
project (my_raylib_game C)

set(CMAKE_C_STANDARD 99)

file(GLOB_RECURSE PROJECT_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_LIST_DIR}/src/*.c")
```

for C++

```
project(my_raylib_game CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE PROJECT_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_LIST_DIR}/src/*.cpp")
```

You would have to change main.cpp to main.c or vice versa in the src directory.

Then just reload CMAKE then the build should update.

### Reference
I based and used [SasLuca's](https://github.com/SasLuca/raylib-cmake-template) Raylib Template
