# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ictgi\Desktop\BSCS1_CCS102_Computer_Programming_Finals

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ictgi\Desktop\BSCS1_CCS102_Computer_Programming_Finals\build

# Include any dependencies generated for this target.
include CMakeFiles/CxxFinals2022-modules.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CxxFinals2022-modules.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CxxFinals2022-modules.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CxxFinals2022-modules.dir/flags.make

CMakeFiles/CxxFinals2022-modules.dir/modules/create_destroy_arrays.cpp.obj: CMakeFiles/CxxFinals2022-modules.dir/flags.make
CMakeFiles/CxxFinals2022-modules.dir/modules/create_destroy_arrays.cpp.obj: ../modules/create_destroy_arrays.cpp
CMakeFiles/CxxFinals2022-modules.dir/modules/create_destroy_arrays.cpp.obj: CMakeFiles/CxxFinals2022-modules.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ictgi\Desktop\BSCS1_CCS102_Computer_Programming_Finals\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CxxFinals2022-modules.dir/modules/create_destroy_arrays.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CxxFinals2022-modules.dir/modules/create_destroy_arrays.cpp.obj -MF CMakeFiles\CxxFinals2022-modules.dir\modules\create_destroy_arrays.cpp.obj.d -o CMakeFiles\CxxFinals2022-modules.dir\modules\create_destroy_arrays.cpp.obj -c C:\Users\ictgi\Desktop\BSCS1_CCS102_Computer_Programming_Finals\modules\create_destroy_arrays.cpp

CMakeFiles/CxxFinals2022-modules.dir/modules/create_destroy_arrays.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CxxFinals2022-modules.dir/modules/create_destroy_arrays.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ictgi\Desktop\BSCS1_CCS102_Computer_Programming_Finals\modules\create_destroy_arrays.cpp > CMakeFiles\CxxFinals2022-modules.dir\modules\create_destroy_arrays.cpp.i

CMakeFiles/CxxFinals2022-modules.dir/modules/create_destroy_arrays.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CxxFinals2022-modules.dir/modules/create_destroy_arrays.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ictgi\Desktop\BSCS1_CCS102_Computer_Programming_Finals\modules\create_destroy_arrays.cpp -o CMakeFiles\CxxFinals2022-modules.dir\modules\create_destroy_arrays.cpp.s

CxxFinals2022-modules: CMakeFiles/CxxFinals2022-modules.dir/modules/create_destroy_arrays.cpp.obj
CxxFinals2022-modules: CMakeFiles/CxxFinals2022-modules.dir/build.make
.PHONY : CxxFinals2022-modules

# Rule to build all files generated by this target.
CMakeFiles/CxxFinals2022-modules.dir/build: CxxFinals2022-modules
.PHONY : CMakeFiles/CxxFinals2022-modules.dir/build

CMakeFiles/CxxFinals2022-modules.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CxxFinals2022-modules.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CxxFinals2022-modules.dir/clean

CMakeFiles/CxxFinals2022-modules.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ictgi\Desktop\BSCS1_CCS102_Computer_Programming_Finals C:\Users\ictgi\Desktop\BSCS1_CCS102_Computer_Programming_Finals C:\Users\ictgi\Desktop\BSCS1_CCS102_Computer_Programming_Finals\build C:\Users\ictgi\Desktop\BSCS1_CCS102_Computer_Programming_Finals\build C:\Users\ictgi\Desktop\BSCS1_CCS102_Computer_Programming_Finals\build\CMakeFiles\CxxFinals2022-modules.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CxxFinals2022-modules.dir/depend

