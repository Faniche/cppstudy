# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /snap/clion/103/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/103/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chiry/CLionProjects/01_stack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chiry/CLionProjects/01_stack/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/01_stack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/01_stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/01_stack.dir/flags.make

CMakeFiles/01_stack.dir/main.cpp.o: CMakeFiles/01_stack.dir/flags.make
CMakeFiles/01_stack.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chiry/CLionProjects/01_stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/01_stack.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/01_stack.dir/main.cpp.o -c /home/chiry/CLionProjects/01_stack/main.cpp

CMakeFiles/01_stack.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/01_stack.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chiry/CLionProjects/01_stack/main.cpp > CMakeFiles/01_stack.dir/main.cpp.i

CMakeFiles/01_stack.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/01_stack.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chiry/CLionProjects/01_stack/main.cpp -o CMakeFiles/01_stack.dir/main.cpp.s

CMakeFiles/01_stack.dir/CharStack.cpp.o: CMakeFiles/01_stack.dir/flags.make
CMakeFiles/01_stack.dir/CharStack.cpp.o: ../CharStack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chiry/CLionProjects/01_stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/01_stack.dir/CharStack.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/01_stack.dir/CharStack.cpp.o -c /home/chiry/CLionProjects/01_stack/CharStack.cpp

CMakeFiles/01_stack.dir/CharStack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/01_stack.dir/CharStack.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chiry/CLionProjects/01_stack/CharStack.cpp > CMakeFiles/01_stack.dir/CharStack.cpp.i

CMakeFiles/01_stack.dir/CharStack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/01_stack.dir/CharStack.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chiry/CLionProjects/01_stack/CharStack.cpp -o CMakeFiles/01_stack.dir/CharStack.cpp.s

CMakeFiles/01_stack.dir/CharStackArr.cpp.o: CMakeFiles/01_stack.dir/flags.make
CMakeFiles/01_stack.dir/CharStackArr.cpp.o: ../CharStackArr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chiry/CLionProjects/01_stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/01_stack.dir/CharStackArr.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/01_stack.dir/CharStackArr.cpp.o -c /home/chiry/CLionProjects/01_stack/CharStackArr.cpp

CMakeFiles/01_stack.dir/CharStackArr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/01_stack.dir/CharStackArr.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chiry/CLionProjects/01_stack/CharStackArr.cpp > CMakeFiles/01_stack.dir/CharStackArr.cpp.i

CMakeFiles/01_stack.dir/CharStackArr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/01_stack.dir/CharStackArr.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chiry/CLionProjects/01_stack/CharStackArr.cpp -o CMakeFiles/01_stack.dir/CharStackArr.cpp.s

# Object files for target 01_stack
01_stack_OBJECTS = \
"CMakeFiles/01_stack.dir/main.cpp.o" \
"CMakeFiles/01_stack.dir/CharStack.cpp.o" \
"CMakeFiles/01_stack.dir/CharStackArr.cpp.o"

# External object files for target 01_stack
01_stack_EXTERNAL_OBJECTS =

01_stack: CMakeFiles/01_stack.dir/main.cpp.o
01_stack: CMakeFiles/01_stack.dir/CharStack.cpp.o
01_stack: CMakeFiles/01_stack.dir/CharStackArr.cpp.o
01_stack: CMakeFiles/01_stack.dir/build.make
01_stack: CMakeFiles/01_stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chiry/CLionProjects/01_stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable 01_stack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/01_stack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/01_stack.dir/build: 01_stack

.PHONY : CMakeFiles/01_stack.dir/build

CMakeFiles/01_stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/01_stack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/01_stack.dir/clean

CMakeFiles/01_stack.dir/depend:
	cd /home/chiry/CLionProjects/01_stack/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chiry/CLionProjects/01_stack /home/chiry/CLionProjects/01_stack /home/chiry/CLionProjects/01_stack/cmake-build-debug /home/chiry/CLionProjects/01_stack/cmake-build-debug /home/chiry/CLionProjects/01_stack/cmake-build-debug/CMakeFiles/01_stack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/01_stack.dir/depend
