# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/lwb85/Documents/Document/Datastructrue

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug

# Include any dependencies generated for this target.
include CppBasic/CMakeFiles/round_up.dir/depend.make

# Include the progress variables for this target.
include CppBasic/CMakeFiles/round_up.dir/progress.make

# Include the compile flags for this target's objects.
include CppBasic/CMakeFiles/round_up.dir/flags.make

CppBasic/CMakeFiles/round_up.dir/round_up.cpp.o: CppBasic/CMakeFiles/round_up.dir/flags.make
CppBasic/CMakeFiles/round_up.dir/round_up.cpp.o: ../CppBasic/round_up.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CppBasic/CMakeFiles/round_up.dir/round_up.cpp.o"
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/round_up.dir/round_up.cpp.o -c /mnt/c/Users/lwb85/Documents/Document/Datastructrue/CppBasic/round_up.cpp

CppBasic/CMakeFiles/round_up.dir/round_up.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/round_up.dir/round_up.cpp.i"
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/lwb85/Documents/Document/Datastructrue/CppBasic/round_up.cpp > CMakeFiles/round_up.dir/round_up.cpp.i

CppBasic/CMakeFiles/round_up.dir/round_up.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/round_up.dir/round_up.cpp.s"
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/lwb85/Documents/Document/Datastructrue/CppBasic/round_up.cpp -o CMakeFiles/round_up.dir/round_up.cpp.s

CppBasic/CMakeFiles/round_up.dir/round_up.cpp.o.requires:

.PHONY : CppBasic/CMakeFiles/round_up.dir/round_up.cpp.o.requires

CppBasic/CMakeFiles/round_up.dir/round_up.cpp.o.provides: CppBasic/CMakeFiles/round_up.dir/round_up.cpp.o.requires
	$(MAKE) -f CppBasic/CMakeFiles/round_up.dir/build.make CppBasic/CMakeFiles/round_up.dir/round_up.cpp.o.provides.build
.PHONY : CppBasic/CMakeFiles/round_up.dir/round_up.cpp.o.provides

CppBasic/CMakeFiles/round_up.dir/round_up.cpp.o.provides.build: CppBasic/CMakeFiles/round_up.dir/round_up.cpp.o


# Object files for target round_up
round_up_OBJECTS = \
"CMakeFiles/round_up.dir/round_up.cpp.o"

# External object files for target round_up
round_up_EXTERNAL_OBJECTS =

CppBasic/round_up: CppBasic/CMakeFiles/round_up.dir/round_up.cpp.o
CppBasic/round_up: CppBasic/CMakeFiles/round_up.dir/build.make
CppBasic/round_up: CppBasic/CMakeFiles/round_up.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable round_up"
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/round_up.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CppBasic/CMakeFiles/round_up.dir/build: CppBasic/round_up

.PHONY : CppBasic/CMakeFiles/round_up.dir/build

CppBasic/CMakeFiles/round_up.dir/requires: CppBasic/CMakeFiles/round_up.dir/round_up.cpp.o.requires

.PHONY : CppBasic/CMakeFiles/round_up.dir/requires

CppBasic/CMakeFiles/round_up.dir/clean:
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic && $(CMAKE_COMMAND) -P CMakeFiles/round_up.dir/cmake_clean.cmake
.PHONY : CppBasic/CMakeFiles/round_up.dir/clean

CppBasic/CMakeFiles/round_up.dir/depend:
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/lwb85/Documents/Document/Datastructrue /mnt/c/Users/lwb85/Documents/Document/Datastructrue/CppBasic /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic/CMakeFiles/round_up.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CppBasic/CMakeFiles/round_up.dir/depend

