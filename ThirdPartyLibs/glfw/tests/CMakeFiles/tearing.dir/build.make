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
include ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/depend.make

# Include the progress variables for this target.
include ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/progress.make

# Include the compile flags for this target's objects.
include ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/flags.make

ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/tearing.c.o: ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/flags.make
ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/tearing.c.o: ThirdPartyLibs/glfw/tests/tearing.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/tungnguyen/code/MachineLearn/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/tearing.c.o"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/tearing.dir/tearing.c.o   -c /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests/tearing.c

ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/tearing.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tearing.dir/tearing.c.i"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests/tearing.c > CMakeFiles/tearing.dir/tearing.c.i

ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/tearing.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tearing.dir/tearing.c.s"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests/tearing.c -o CMakeFiles/tearing.dir/tearing.c.s

ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/tearing.c.o.requires:
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/tearing.c.o.requires

ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/tearing.c.o.provides: ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/tearing.c.o.requires
	$(MAKE) -f ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/build.make ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/tearing.c.o.provides.build
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/tearing.c.o.provides

ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/tearing.c.o.provides.build: ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/tearing.c.o

# Object files for target tearing
tearing_OBJECTS = \
"CMakeFiles/tearing.dir/tearing.c.o"

# External object files for target tearing
tearing_EXTERNAL_OBJECTS =

ThirdPartyLibs/glfw/tests/tearing.app/Contents/MacOS/tearing: ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/tearing.c.o
ThirdPartyLibs/glfw/tests/tearing.app/Contents/MacOS/tearing: ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/build.make
ThirdPartyLibs/glfw/tests/tearing.app/Contents/MacOS/tearing: ThirdPartyLibs/glfw/src/libglfw3.a
ThirdPartyLibs/glfw/tests/tearing.app/Contents/MacOS/tearing: ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable tearing.app/Contents/MacOS/tearing"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tearing.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/build: ThirdPartyLibs/glfw/tests/tearing.app/Contents/MacOS/tearing
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/build

ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/requires: ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/tearing.c.o.requires
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/requires

ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/clean:
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && $(CMAKE_COMMAND) -P CMakeFiles/tearing.dir/cmake_clean.cmake
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/clean

ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/depend:
	cd /Users/tungnguyen/code/MachineLearn && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tungnguyen/code/MachineLearn /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests /Users/tungnguyen/code/MachineLearn /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/tearing.dir/depend

