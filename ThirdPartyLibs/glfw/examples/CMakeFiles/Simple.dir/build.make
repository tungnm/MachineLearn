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
include ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/depend.make

# Include the progress variables for this target.
include ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/progress.make

# Include the compile flags for this target's objects.
include ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/flags.make

ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/simple.c.o: ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/flags.make
ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/simple.c.o: ThirdPartyLibs/glfw/examples/simple.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/tungnguyen/code/MachineLearn/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/simple.c.o"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/examples && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/Simple.dir/simple.c.o   -c /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/examples/simple.c

ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/simple.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Simple.dir/simple.c.i"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/examples && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/examples/simple.c > CMakeFiles/Simple.dir/simple.c.i

ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/simple.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Simple.dir/simple.c.s"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/examples && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/examples/simple.c -o CMakeFiles/Simple.dir/simple.c.s

ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/simple.c.o.requires:
.PHONY : ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/simple.c.o.requires

ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/simple.c.o.provides: ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/simple.c.o.requires
	$(MAKE) -f ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/build.make ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/simple.c.o.provides.build
.PHONY : ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/simple.c.o.provides

ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/simple.c.o.provides.build: ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/simple.c.o

# Object files for target Simple
Simple_OBJECTS = \
"CMakeFiles/Simple.dir/simple.c.o"

# External object files for target Simple
Simple_EXTERNAL_OBJECTS =

ThirdPartyLibs/glfw/examples/Simple.app/Contents/MacOS/Simple: ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/simple.c.o
ThirdPartyLibs/glfw/examples/Simple.app/Contents/MacOS/Simple: ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/build.make
ThirdPartyLibs/glfw/examples/Simple.app/Contents/MacOS/Simple: ThirdPartyLibs/glfw/src/libglfw3.a
ThirdPartyLibs/glfw/examples/Simple.app/Contents/MacOS/Simple: ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable Simple.app/Contents/MacOS/Simple"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Simple.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/build: ThirdPartyLibs/glfw/examples/Simple.app/Contents/MacOS/Simple
.PHONY : ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/build

ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/requires: ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/simple.c.o.requires
.PHONY : ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/requires

ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/clean:
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/examples && $(CMAKE_COMMAND) -P CMakeFiles/Simple.dir/cmake_clean.cmake
.PHONY : ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/clean

ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/depend:
	cd /Users/tungnguyen/code/MachineLearn && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tungnguyen/code/MachineLearn /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/examples /Users/tungnguyen/code/MachineLearn /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/examples /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ThirdPartyLibs/glfw/examples/CMakeFiles/Simple.dir/depend

