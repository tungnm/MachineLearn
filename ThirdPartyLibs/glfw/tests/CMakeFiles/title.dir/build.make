# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tungnguyen/code/MachineLearn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tungnguyen/code/MachineLearn

# Include any dependencies generated for this target.
include ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/depend.make

# Include the progress variables for this target.
include ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/progress.make

# Include the compile flags for this target's objects.
include ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/flags.make

ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/title.c.o: ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/flags.make
ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/title.c.o: ThirdPartyLibs/glfw/tests/title.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/tungnguyen/code/MachineLearn/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/title.c.o"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/title.dir/title.c.o   -c /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests/title.c

ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/title.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/title.dir/title.c.i"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests/title.c > CMakeFiles/title.dir/title.c.i

ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/title.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/title.dir/title.c.s"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests/title.c -o CMakeFiles/title.dir/title.c.s

ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/title.c.o.requires:
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/title.c.o.requires

ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/title.c.o.provides: ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/title.c.o.requires
	$(MAKE) -f ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/build.make ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/title.c.o.provides.build
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/title.c.o.provides

ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/title.c.o.provides.build: ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/title.c.o

# Object files for target title
title_OBJECTS = \
"CMakeFiles/title.dir/title.c.o"

# External object files for target title
title_EXTERNAL_OBJECTS =

ThirdPartyLibs/glfw/tests/title.app/Contents/MacOS/title: ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/title.c.o
ThirdPartyLibs/glfw/tests/title.app/Contents/MacOS/title: ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/build.make
ThirdPartyLibs/glfw/tests/title.app/Contents/MacOS/title: ThirdPartyLibs/glfw/src/libglfw3.a
ThirdPartyLibs/glfw/tests/title.app/Contents/MacOS/title: ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable title.app/Contents/MacOS/title"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/title.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/build: ThirdPartyLibs/glfw/tests/title.app/Contents/MacOS/title
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/build

ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/requires: ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/title.c.o.requires
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/requires

ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/clean:
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && $(CMAKE_COMMAND) -P CMakeFiles/title.dir/cmake_clean.cmake
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/clean

ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/depend:
	cd /Users/tungnguyen/code/MachineLearn && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tungnguyen/code/MachineLearn /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests /Users/tungnguyen/code/MachineLearn /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/title.dir/depend

