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
include CppBasic/CMakeFiles/ex1_1.dir/depend.make

# Include the progress variables for this target.
include CppBasic/CMakeFiles/ex1_1.dir/progress.make

# Include the compile flags for this target's objects.
include CppBasic/CMakeFiles/ex1_1.dir/flags.make

CppBasic/CMakeFiles/ex1_1.dir/ex1_1.cpp.o: CppBasic/CMakeFiles/ex1_1.dir/flags.make
CppBasic/CMakeFiles/ex1_1.dir/ex1_1.cpp.o: ../CppBasic/ex1_1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CppBasic/CMakeFiles/ex1_1.dir/ex1_1.cpp.o"
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex1_1.dir/ex1_1.cpp.o -c /mnt/c/Users/lwb85/Documents/Document/Datastructrue/CppBasic/ex1_1.cpp

CppBasic/CMakeFiles/ex1_1.dir/ex1_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex1_1.dir/ex1_1.cpp.i"
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/lwb85/Documents/Document/Datastructrue/CppBasic/ex1_1.cpp > CMakeFiles/ex1_1.dir/ex1_1.cpp.i

CppBasic/CMakeFiles/ex1_1.dir/ex1_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex1_1.dir/ex1_1.cpp.s"
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/lwb85/Documents/Document/Datastructrue/CppBasic/ex1_1.cpp -o CMakeFiles/ex1_1.dir/ex1_1.cpp.s

CppBasic/CMakeFiles/ex1_1.dir/ex1_1.cpp.o.requires:

.PHONY : CppBasic/CMakeFiles/ex1_1.dir/ex1_1.cpp.o.requires

CppBasic/CMakeFiles/ex1_1.dir/ex1_1.cpp.o.provides: CppBasic/CMakeFiles/ex1_1.dir/ex1_1.cpp.o.requires
	$(MAKE) -f CppBasic/CMakeFiles/ex1_1.dir/build.make CppBasic/CMakeFiles/ex1_1.dir/ex1_1.cpp.o.provides.build
.PHONY : CppBasic/CMakeFiles/ex1_1.dir/ex1_1.cpp.o.provides

CppBasic/CMakeFiles/ex1_1.dir/ex1_1.cpp.o.provides.build: CppBasic/CMakeFiles/ex1_1.dir/ex1_1.cpp.o


# Object files for target ex1_1
ex1_1_OBJECTS = \
"CMakeFiles/ex1_1.dir/ex1_1.cpp.o"

# External object files for target ex1_1
ex1_1_EXTERNAL_OBJECTS =

CppBasic/ex1_1: CppBasic/CMakeFiles/ex1_1.dir/ex1_1.cpp.o
CppBasic/ex1_1: CppBasic/CMakeFiles/ex1_1.dir/build.make
CppBasic/ex1_1: CppBasic/CMakeFiles/ex1_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ex1_1"
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex1_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CppBasic/CMakeFiles/ex1_1.dir/build: CppBasic/ex1_1

.PHONY : CppBasic/CMakeFiles/ex1_1.dir/build

CppBasic/CMakeFiles/ex1_1.dir/requires: CppBasic/CMakeFiles/ex1_1.dir/ex1_1.cpp.o.requires

.PHONY : CppBasic/CMakeFiles/ex1_1.dir/requires

CppBasic/CMakeFiles/ex1_1.dir/clean:
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic && $(CMAKE_COMMAND) -P CMakeFiles/ex1_1.dir/cmake_clean.cmake
.PHONY : CppBasic/CMakeFiles/ex1_1.dir/clean

CppBasic/CMakeFiles/ex1_1.dir/depend:
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/lwb85/Documents/Document/Datastructrue /mnt/c/Users/lwb85/Documents/Document/Datastructrue/CppBasic /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic/CMakeFiles/ex1_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CppBasic/CMakeFiles/ex1_1.dir/depend
