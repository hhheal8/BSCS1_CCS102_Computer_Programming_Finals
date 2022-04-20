cmake_minimum_required(VERSION 3.0.0)

project(
  CreateReadUpdateDeleteSearchCxx20 
  VERSION 0.1.0
  DESCRIPTION "First Year BSCS CCS102 Computer Programming Finals Project (May 2022)"
  LANGUAGES CXX
)

add_executable(
  CxxFinals2022
  main.cpp

  source/create_destroy_arrays.cpp
  source/create_user_file.cpp
  source/enter_name_of_the_file.cpp
  source/home.cpp

  start/start_program.cpp

  tools/recursive_fun.cpp
)

target_compile_features(
  CxxFinals2022 PRIVATE cxx_std_20
)

target_include_directories(
  CxxFinals2022 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include  
)

# REVIEW: With C++20 Module
# cmake_minimum_required(VERSION 3.0.0)

# project(
#   CreateReadUpdateDeleteSearchCxx20 
#   VERSION 0.1.0
#   DESCRIPTION "First Year BSCS CCS102 Computer Programming Finals Project (May 2022)"
#   LANGUAGES CXX
# )

# # Add target to build C++ includes module
# add_custom_target(std_modules ALL
#   COMMAND ${CMAKE_COMMAND} -E echo "Building standard library modules"
#   COMMAND g++ -fmodules-ts -std=c++20 -c -x c++-system-header cstddef iostream string
#   WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
# )

# # Function to set up modules in GCC
# function (prepare_for_module TGT)
#   target_compile_options(${TGT} PUBLIC -fmodules-ts)
#   set_property(TARGET ${TGT} PROPERTY CXX_STANDARD 20)
#   set_property(TARGET ${TGT} PROPERTY CXX_EXTENSIONS OFF)
#   add_dependencies(${TGT} std_modules)
# endfunction()

# # Program name and sources
# set(TARGET CxxFinals2022)
# set(
#   SOURCES 
#   main.cpp
# )
# set(
#   MODULES 
#   modules/create_destroy_arrays.cpp
#   modules/enter_name_of_the_file.cpp
#   modules/start_program.cpp
# )

# # Setup program modules object library
# set(MODULE_TARGET CxxFinals2022-modules)
# add_library(${MODULE_TARGET} OBJECT ${MODULES})
# prepare_for_module(${MODULE_TARGET})

# # Setup executable
# add_executable(${TARGET} ${SOURCES})
# prepare_for_module(${TARGET})

# # Add modules to application using object library
# target_link_libraries(${TARGET} PRIVATE ${MODULE_TARGET})

# #REVIEW: test
# #LINK: https://www.steinzone.de/wordpress/modules-in-c20-and-cmake/

# cmake_minimum_required(VERSION 3.0.0)

# project(
#   CreateReadUpdateDeleteSearchCxx20 
#   VERSION 0.1.0
#   DESCRIPTION "First Year BSCS CCS102 Computer Programming Finals Project (May 2022)"
#   LANGUAGES CXX
# )

# set(CMAKE_CXX_STANDARD 20)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_EXTENSIONS OFF)

# set(PREBUILT_MODULE_PATH ${CMAKE_BINARY_DIR}/modules)

# function(add_module name)
#   file(MAKE_DIRECTORY ${PREBUILT_MODULE_PATH})
#     if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
#       # using Clang
#       add_custom_target(
#         ${name}.pcm
#         COMMAND ${CMAKE_CXX_COMPILER} 
#         -std=c++20 -c ${CMAKE_CURRENT_SOURCE_DIR}/${ARGN} -Xclang -emit-module-interface -o ${PREBUILT_MODULE_PATH}/${name}.pcm
#       )

#     elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
#       # using GCC
#       add_custom_target(
#         ${name}.pcm
#         COMMAND ${CMAKE_CXX_COMPILER} 
#         -std=c++20 -fmodules-ts -c ${CMAKE_CURRENT_SOURCE_DIR}/${ARGN} -o ${name}.pcm
#       )
#       #g++ -std=c++20 -fmodules-ts -xc++-system-header iostream

#     elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
#       # using Visual Studio C++
#       add_custom_target(
#         ${name}.obj
#         COMMAND ${CMAKE_CXX_COMPILER} /experimental:module/c ${CMAKE_CURRENT_SOURCE_DIR}/${ARGN}
#       )

#     endif()
# endfunction()

# if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
#   # using Clang
#   add_compile_options(-fprebuilt-module-path=${PREBUILT_MODULE_PATH})

#   add_module(helloworld helloworld.cpp)
#   add_executable(mainExe main.cpp helloworld.cpp)

#   add_dependencies(main helloworld.pcm)

# elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
#   # using GCC
#   add_compile_options(-fmodules-ts)

#   add_module(
#     create_destroy_arrays functions/create_destroy_arrays.cpp
#     enter_name_of_the_file functions/enter_name_of_the_file.cpp
#   )

#   add_executable(
#     main 
#     main.cpp
#   )

#   add_custom_target(
#     modules 
#     functions/create_destroy_arrays.cpp
#     functions/enter_name_of_the_file.cpp
#   )

#   target_link_options(
#     main 
#     PUBLIC "LINKER:create_destroy_arrays.pcm"
#     PUBLIC "LINKER:enter_name_of_the_file.pcm"
#   )

#   add_dependencies(
#     main 
#     create_destroy_arrays.pcm
#     enter_name_of_the_file.pcm
#   )

# elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
#   # using Visual Studio C++
#   add_compile_options(/experimental:module /c)

#   add_module(helloworld helloworld.cpp)
#   add_executable(mainExe main.cpp)

#   add_dependencies(main helloworld.pcm)

# endif()
