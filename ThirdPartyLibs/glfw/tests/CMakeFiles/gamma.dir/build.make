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
include ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/depend.make

# Include the progress variables for this target.
include ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/progress.make

# Include the compile flags for this target's objects.
include ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/flags.make

ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/gamma.c.o: ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/flags.make
ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/gamma.c.o: ThirdPartyLibs/glfw/tests/gamma.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/tungnguyen/code/MachineLearn/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/gamma.c.o"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/gamma.dir/gamma.c.o   -c /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests/gamma.c

ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/gamma.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/gamma.dir/gamma.c.i"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests/gamma.c > CMakeFiles/gamma.dir/gamma.c.i

ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/gamma.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/gamma.dir/gamma.c.s"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests/gamma.c -o CMakeFiles/gamma.dir/gamma.c.s

ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/gamma.c.o.requires:
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/gamma.c.o.requires

ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/gamma.c.o.provides: ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/gamma.c.o.requires
	$(MAKE) -f ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/build.make ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/gamma.c.o.provides.build
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/gamma.c.o.provides

ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/gamma.c.o.provides.build: ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/gamma.c.o

ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/__/deps/getopt.c.o: ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/flags.make
ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/__/deps/getopt.c.o: ThirdPartyLibs/glfw/deps/getopt.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/tungnguyen/code/MachineLearn/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/__/deps/getopt.c.o"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/gamma.dir/__/deps/getopt.c.o   -c /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/deps/getopt.c

ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/__/deps/getopt.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/gamma.dir/__/deps/getopt.c.i"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/deps/getopt.c > CMakeFiles/gamma.dir/__/deps/getopt.c.i

ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/__/deps/getopt.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/gamma.dir/__/deps/getopt.c.s"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/deps/getopt.c -o CMakeFiles/gamma.dir/__/deps/getopt.c.s

ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/__/deps/getopt.c.o.requires:
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/__/deps/getopt.c.o.requires

ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/__/deps/getopt.c.o.provides: ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/__/deps/getopt.c.o.requires
	$(MAKE) -f ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/build.make ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/__/deps/getopt.c.o.provides.build
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/__/deps/getopt.c.o.provides

ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/__/deps/getopt.c.o.provides.build: ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/__/deps/getopt.c.o

# Object files for target gamma
gamma_OBJECTS = \
"CMakeFiles/gamma.dir/gamma.c.o" \
"CMakeFiles/gamma.dir/__/deps/getopt.c.o"

# External object files for target gamma
gamma_EXTERNAL_OBJECTS =

ThirdPartyLibs/glfw/tests/gamma: ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/gamma.c.o
ThirdPartyLibs/glfw/tests/gamma: ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/__/deps/getopt.c.o
ThirdPartyLibs/glfw/tests/gamma: ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/build.make
ThirdPartyLibs/glfw/tests/gamma: ThirdPartyLibs/glfw/src/libglfw3.a
ThirdPartyLibs/glfw/tests/gamma: ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable gamma"
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gamma.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/build: ThirdPartyLibs/glfw/tests/gamma
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/build

ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/requires: ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/gamma.c.o.requires
ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/requires: ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/__/deps/getopt.c.o.requires
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/requires

ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/clean:
	cd /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests && $(CMAKE_COMMAND) -P CMakeFiles/gamma.dir/cmake_clean.cmake
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/clean

ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/depend:
	cd /Users/tungnguyen/code/MachineLearn && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tungnguyen/code/MachineLearn /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests /Users/tungnguyen/code/MachineLearn /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests /Users/tungnguyen/code/MachineLearn/ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ThirdPartyLibs/glfw/tests/CMakeFiles/gamma.dir/depend

