# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_SOURCE_DIR = /tmp/tmp.nVPi5kO0KN

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /tmp/tmp.nVPi5kO0KN/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LinkerList.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LinkerList.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LinkerList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinkerList.dir/flags.make

CMakeFiles/LinkerList.dir/LinkerList/LinkedList/test.c.o: CMakeFiles/LinkerList.dir/flags.make
CMakeFiles/LinkerList.dir/LinkerList/LinkedList/test.c.o: ../LinkerList/LinkedList/test.c
CMakeFiles/LinkerList.dir/LinkerList/LinkedList/test.c.o: CMakeFiles/LinkerList.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.nVPi5kO0KN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LinkerList.dir/LinkerList/LinkedList/test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LinkerList.dir/LinkerList/LinkedList/test.c.o -MF CMakeFiles/LinkerList.dir/LinkerList/LinkedList/test.c.o.d -o CMakeFiles/LinkerList.dir/LinkerList/LinkedList/test.c.o -c /tmp/tmp.nVPi5kO0KN/LinkerList/LinkedList/test.c

CMakeFiles/LinkerList.dir/LinkerList/LinkedList/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LinkerList.dir/LinkerList/LinkedList/test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /tmp/tmp.nVPi5kO0KN/LinkerList/LinkedList/test.c > CMakeFiles/LinkerList.dir/LinkerList/LinkedList/test.c.i

CMakeFiles/LinkerList.dir/LinkerList/LinkedList/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LinkerList.dir/LinkerList/LinkedList/test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /tmp/tmp.nVPi5kO0KN/LinkerList/LinkedList/test.c -o CMakeFiles/LinkerList.dir/LinkerList/LinkedList/test.c.s

# Object files for target LinkerList
LinkerList_OBJECTS = \
"CMakeFiles/LinkerList.dir/LinkerList/LinkedList/test.c.o"

# External object files for target LinkerList
LinkerList_EXTERNAL_OBJECTS =

LinkerList: CMakeFiles/LinkerList.dir/LinkerList/LinkedList/test.c.o
LinkerList: CMakeFiles/LinkerList.dir/build.make
LinkerList: CMakeFiles/LinkerList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/tmp/tmp.nVPi5kO0KN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable LinkerList"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LinkerList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinkerList.dir/build: LinkerList
.PHONY : CMakeFiles/LinkerList.dir/build

CMakeFiles/LinkerList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LinkerList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LinkerList.dir/clean

CMakeFiles/LinkerList.dir/depend:
	cd /tmp/tmp.nVPi5kO0KN/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /tmp/tmp.nVPi5kO0KN /tmp/tmp.nVPi5kO0KN /tmp/tmp.nVPi5kO0KN/cmake-build-debug /tmp/tmp.nVPi5kO0KN/cmake-build-debug /tmp/tmp.nVPi5kO0KN/cmake-build-debug/CMakeFiles/LinkerList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LinkerList.dir/depend

