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
include CppBasic/CMakeFiles/vector.dir/depend.make

# Include the progress variables for this target.
include CppBasic/CMakeFiles/vector.dir/progress.make

# Include the compile flags for this target's objects.
include CppBasic/CMakeFiles/vector.dir/flags.make

CppBasic/CMakeFiles/vector.dir/matirx.cpp.o: CppBasic/CMakeFiles/vector.dir/flags.make
CppBasic/CMakeFiles/vector.dir/matirx.cpp.o: ../CppBasic/matirx.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CppBasic/CMakeFiles/vector.dir/matirx.cpp.o"
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vector.dir/matirx.cpp.o -c /mnt/c/Users/lwb85/Documents/Document/Datastructrue/CppBasic/matirx.cpp

CppBasic/CMakeFiles/vector.dir/matirx.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vector.dir/matirx.cpp.i"
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/lwb85/Documents/Document/Datastructrue/CppBasic/matirx.cpp > CMakeFiles/vector.dir/matirx.cpp.i

CppBasic/CMakeFiles/vector.dir/matirx.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vector.dir/matirx.cpp.s"
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/lwb85/Documents/Document/Datastructrue/CppBasic/matirx.cpp -o CMakeFiles/vector.dir/matirx.cpp.s

CppBasic/CMakeFiles/vector.dir/matirx.cpp.o.requires:

.PHONY : CppBasic/CMakeFiles/vector.dir/matirx.cpp.o.requires

CppBasic/CMakeFiles/vector.dir/matirx.cpp.o.provides: CppBasic/CMakeFiles/vector.dir/matirx.cpp.o.requires
	$(MAKE) -f CppBasic/CMakeFiles/vector.dir/build.make CppBasic/CMakeFiles/vector.dir/matirx.cpp.o.provides.build
.PHONY : CppBasic/CMakeFiles/vector.dir/matirx.cpp.o.provides

CppBasic/CMakeFiles/vector.dir/matirx.cpp.o.provides.build: CppBasic/CMakeFiles/vector.dir/matirx.cpp.o


# Object files for target vector
vector_OBJECTS = \
"CMakeFiles/vector.dir/matirx.cpp.o"

# External object files for target vector
vector_EXTERNAL_OBJECTS =

CppBasic/vector: CppBasic/CMakeFiles/vector.dir/matirx.cpp.o
CppBasic/vector: CppBasic/CMakeFiles/vector.dir/build.make
CppBasic/vector: CppBasic/CMakeFiles/vector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable vector"
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CppBasic/CMakeFiles/vector.dir/build: CppBasic/vector

.PHONY : CppBasic/CMakeFiles/vector.dir/build

CppBasic/CMakeFiles/vector.dir/requires: CppBasic/CMakeFiles/vector.dir/matirx.cpp.o.requires

.PHONY : CppBasic/CMakeFiles/vector.dir/requires

CppBasic/CMakeFiles/vector.dir/clean:
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic && $(CMAKE_COMMAND) -P CMakeFiles/vector.dir/cmake_clean.cmake
.PHONY : CppBasic/CMakeFiles/vector.dir/clean

CppBasic/CMakeFiles/vector.dir/depend:
	cd /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/lwb85/Documents/Document/Datastructrue /mnt/c/Users/lwb85/Documents/Document/Datastructrue/CppBasic /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic /mnt/c/Users/lwb85/Documents/Document/Datastructrue/cmake-build-debug/CppBasic/CMakeFiles/vector.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CppBasic/CMakeFiles/vector.dir/depend

