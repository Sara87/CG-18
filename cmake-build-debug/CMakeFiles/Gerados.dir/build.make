# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/fredericopinto/Documents/CG-18

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fredericopinto/Documents/CG-18/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Gerados.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Gerados.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Gerados.dir/flags.make

CMakeFiles/Gerados.dir/gerador/gerador.cpp.o: CMakeFiles/Gerados.dir/flags.make
CMakeFiles/Gerados.dir/gerador/gerador.cpp.o: ../gerador/gerador.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fredericopinto/Documents/CG-18/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Gerados.dir/gerador/gerador.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Gerados.dir/gerador/gerador.cpp.o -c /Users/fredericopinto/Documents/CG-18/gerador/gerador.cpp

CMakeFiles/Gerados.dir/gerador/gerador.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Gerados.dir/gerador/gerador.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fredericopinto/Documents/CG-18/gerador/gerador.cpp > CMakeFiles/Gerados.dir/gerador/gerador.cpp.i

CMakeFiles/Gerados.dir/gerador/gerador.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Gerados.dir/gerador/gerador.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fredericopinto/Documents/CG-18/gerador/gerador.cpp -o CMakeFiles/Gerados.dir/gerador/gerador.cpp.s

CMakeFiles/Gerados.dir/gerador/gerador.cpp.o.requires:

.PHONY : CMakeFiles/Gerados.dir/gerador/gerador.cpp.o.requires

CMakeFiles/Gerados.dir/gerador/gerador.cpp.o.provides: CMakeFiles/Gerados.dir/gerador/gerador.cpp.o.requires
	$(MAKE) -f CMakeFiles/Gerados.dir/build.make CMakeFiles/Gerados.dir/gerador/gerador.cpp.o.provides.build
.PHONY : CMakeFiles/Gerados.dir/gerador/gerador.cpp.o.provides

CMakeFiles/Gerados.dir/gerador/gerador.cpp.o.provides.build: CMakeFiles/Gerados.dir/gerador/gerador.cpp.o


# Object files for target Gerados
Gerados_OBJECTS = \
"CMakeFiles/Gerados.dir/gerador/gerador.cpp.o"

# External object files for target Gerados
Gerados_EXTERNAL_OBJECTS =

Gerados: CMakeFiles/Gerados.dir/gerador/gerador.cpp.o
Gerados: CMakeFiles/Gerados.dir/build.make
Gerados: CMakeFiles/Gerados.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fredericopinto/Documents/CG-18/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Gerados"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Gerados.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Gerados.dir/build: Gerados

.PHONY : CMakeFiles/Gerados.dir/build

CMakeFiles/Gerados.dir/requires: CMakeFiles/Gerados.dir/gerador/gerador.cpp.o.requires

.PHONY : CMakeFiles/Gerados.dir/requires

CMakeFiles/Gerados.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Gerados.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Gerados.dir/clean

CMakeFiles/Gerados.dir/depend:
	cd /Users/fredericopinto/Documents/CG-18/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fredericopinto/Documents/CG-18 /Users/fredericopinto/Documents/CG-18 /Users/fredericopinto/Documents/CG-18/cmake-build-debug /Users/fredericopinto/Documents/CG-18/cmake-build-debug /Users/fredericopinto/Documents/CG-18/cmake-build-debug/CMakeFiles/Gerados.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Gerados.dir/depend

