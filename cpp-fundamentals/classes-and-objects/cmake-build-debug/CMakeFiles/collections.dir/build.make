# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /opt/clion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dief/Dropbox/study-notes/c++/learn-cpp/cpp-fundamentals/classes-and-objects

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dief/Dropbox/study-notes/c++/learn-cpp/cpp-fundamentals/classes-and-objects/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/collections.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/collections.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/collections.dir/flags.make

CMakeFiles/collections.dir/main.cpp.o: CMakeFiles/collections.dir/flags.make
CMakeFiles/collections.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dief/Dropbox/study-notes/c++/learn-cpp/cpp-fundamentals/classes-and-objects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/collections.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/collections.dir/main.cpp.o -c /home/dief/Dropbox/study-notes/c++/learn-cpp/cpp-fundamentals/classes-and-objects/main.cpp

CMakeFiles/collections.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/collections.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dief/Dropbox/study-notes/c++/learn-cpp/cpp-fundamentals/classes-and-objects/main.cpp > CMakeFiles/collections.dir/main.cpp.i

CMakeFiles/collections.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/collections.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dief/Dropbox/study-notes/c++/learn-cpp/cpp-fundamentals/classes-and-objects/main.cpp -o CMakeFiles/collections.dir/main.cpp.s

CMakeFiles/collections.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/collections.dir/main.cpp.o.requires

CMakeFiles/collections.dir/main.cpp.o.provides: CMakeFiles/collections.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/collections.dir/build.make CMakeFiles/collections.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/collections.dir/main.cpp.o.provides

CMakeFiles/collections.dir/main.cpp.o.provides.build: CMakeFiles/collections.dir/main.cpp.o


# Object files for target collections
collections_OBJECTS = \
"CMakeFiles/collections.dir/main.cpp.o"

# External object files for target collections
collections_EXTERNAL_OBJECTS =

collections: CMakeFiles/collections.dir/main.cpp.o
collections: CMakeFiles/collections.dir/build.make
collections: CMakeFiles/collections.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dief/Dropbox/study-notes/c++/learn-cpp/cpp-fundamentals/classes-and-objects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable collections"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/collections.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/collections.dir/build: collections

.PHONY : CMakeFiles/collections.dir/build

CMakeFiles/collections.dir/requires: CMakeFiles/collections.dir/main.cpp.o.requires

.PHONY : CMakeFiles/collections.dir/requires

CMakeFiles/collections.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/collections.dir/cmake_clean.cmake
.PHONY : CMakeFiles/collections.dir/clean

CMakeFiles/collections.dir/depend:
	cd /home/dief/Dropbox/study-notes/c++/learn-cpp/cpp-fundamentals/classes-and-objects/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dief/Dropbox/study-notes/c++/learn-cpp/cpp-fundamentals/classes-and-objects /home/dief/Dropbox/study-notes/c++/learn-cpp/cpp-fundamentals/classes-and-objects /home/dief/Dropbox/study-notes/c++/learn-cpp/cpp-fundamentals/classes-and-objects/cmake-build-debug /home/dief/Dropbox/study-notes/c++/learn-cpp/cpp-fundamentals/classes-and-objects/cmake-build-debug /home/dief/Dropbox/study-notes/c++/learn-cpp/cpp-fundamentals/classes-and-objects/cmake-build-debug/CMakeFiles/collections.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/collections.dir/depend

