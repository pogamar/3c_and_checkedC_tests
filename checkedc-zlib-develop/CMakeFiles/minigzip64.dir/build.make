# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/PLT/HW/3c_CheckedC/Test/benchmark/checkedc-zlib-develop

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/PLT/HW/3c_CheckedC/Test/benchmark/checkedc-zlib-develop

# Include any dependencies generated for this target.
include CMakeFiles/minigzip64.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/minigzip64.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/minigzip64.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/minigzip64.dir/flags.make

CMakeFiles/minigzip64.dir/test/minigzip.c.o: CMakeFiles/minigzip64.dir/flags.make
CMakeFiles/minigzip64.dir/test/minigzip.c.o: test/minigzip.c
CMakeFiles/minigzip64.dir/test/minigzip.c.o: CMakeFiles/minigzip64.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/PLT/HW/3c_CheckedC/Test/benchmark/checkedc-zlib-develop/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/minigzip64.dir/test/minigzip.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/minigzip64.dir/test/minigzip.c.o -MF CMakeFiles/minigzip64.dir/test/minigzip.c.o.d -o CMakeFiles/minigzip64.dir/test/minigzip.c.o -c /mnt/d/PLT/HW/3c_CheckedC/Test/benchmark/checkedc-zlib-develop/test/minigzip.c

CMakeFiles/minigzip64.dir/test/minigzip.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minigzip64.dir/test/minigzip.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/d/PLT/HW/3c_CheckedC/Test/benchmark/checkedc-zlib-develop/test/minigzip.c > CMakeFiles/minigzip64.dir/test/minigzip.c.i

CMakeFiles/minigzip64.dir/test/minigzip.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minigzip64.dir/test/minigzip.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/d/PLT/HW/3c_CheckedC/Test/benchmark/checkedc-zlib-develop/test/minigzip.c -o CMakeFiles/minigzip64.dir/test/minigzip.c.s

# Object files for target minigzip64
minigzip64_OBJECTS = \
"CMakeFiles/minigzip64.dir/test/minigzip.c.o"

# External object files for target minigzip64
minigzip64_EXTERNAL_OBJECTS =

minigzip64: CMakeFiles/minigzip64.dir/test/minigzip.c.o
minigzip64: CMakeFiles/minigzip64.dir/build.make
minigzip64: libz.so.1.3.0.1-motley
minigzip64: CMakeFiles/minigzip64.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/PLT/HW/3c_CheckedC/Test/benchmark/checkedc-zlib-develop/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable minigzip64"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/minigzip64.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/minigzip64.dir/build: minigzip64
.PHONY : CMakeFiles/minigzip64.dir/build

CMakeFiles/minigzip64.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/minigzip64.dir/cmake_clean.cmake
.PHONY : CMakeFiles/minigzip64.dir/clean

CMakeFiles/minigzip64.dir/depend:
	cd /mnt/d/PLT/HW/3c_CheckedC/Test/benchmark/checkedc-zlib-develop && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/PLT/HW/3c_CheckedC/Test/benchmark/checkedc-zlib-develop /mnt/d/PLT/HW/3c_CheckedC/Test/benchmark/checkedc-zlib-develop /mnt/d/PLT/HW/3c_CheckedC/Test/benchmark/checkedc-zlib-develop /mnt/d/PLT/HW/3c_CheckedC/Test/benchmark/checkedc-zlib-develop /mnt/d/PLT/HW/3c_CheckedC/Test/benchmark/checkedc-zlib-develop/CMakeFiles/minigzip64.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/minigzip64.dir/depend

