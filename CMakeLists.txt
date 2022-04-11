cmake_minimum_required(VERSION 3.0.0)

project(
  CreateReadUpdateDeleteSearchCxx20 
  VERSION 0.1.0
  DESCRIPTION "First Year BSCS CCS102 Computer Programming Finals Project (May 2022)"
  LANGUAGES CXX
)

# Add target to build C++ includes module
add_custom_target(std_modules ALL
  COMMAND ${CMAKE_COMMAND} -E echo "Building standard library modules"
  COMMAND g++ -fmodules-ts -std=c++20 -c -x c++-system-header iostream string
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)

# Function to set up modules in GCC
function (prepare_for_module TGT)
  target_compile_options(${TGT} PUBLIC -fmodules-ts)
  set_property(TARGET ${TGT} PROPERTY CXX_STANDARD 20)
  set_property(TARGET ${TGT} PROPERTY CXX_EXTENSIONS OFF)
  add_dependencies(${TGT} std_modules)
endfunction()

# Program name and sources
set(TARGET CxxFinals2022)
set(
  SOURCES 
  main.cpp
)
set(
  MODULES 
  modules/create_destroy_arrays.cpp
)

# Setup program modules object library
set(MODULE_TARGET CxxFinals2022-modules)
add_library(${MODULE_TARGET} OBJECT ${MODULES})
prepare_for_module(${MODULE_TARGET})

# Setup executable
add_executable(${TARGET} ${SOURCES})
prepare_for_module(${TARGET})

# Add modules to application using object library
target_link_libraries(${TARGET} PRIVATE ${MODULE_TARGET})
