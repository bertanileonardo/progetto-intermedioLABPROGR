# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bertaleo/progetto-intermedio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bertaleo/progetto-intermedio

# Include any dependencies generated for this target.
include CMakeFiles/BookTester.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/BookTester.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/BookTester.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BookTester.dir/flags.make

CMakeFiles/BookTester.dir/src/Book.cpp.o: CMakeFiles/BookTester.dir/flags.make
CMakeFiles/BookTester.dir/src/Book.cpp.o: src/Book.cpp
CMakeFiles/BookTester.dir/src/Book.cpp.o: CMakeFiles/BookTester.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bertaleo/progetto-intermedio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BookTester.dir/src/Book.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BookTester.dir/src/Book.cpp.o -MF CMakeFiles/BookTester.dir/src/Book.cpp.o.d -o CMakeFiles/BookTester.dir/src/Book.cpp.o -c /home/bertaleo/progetto-intermedio/src/Book.cpp

CMakeFiles/BookTester.dir/src/Book.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BookTester.dir/src/Book.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bertaleo/progetto-intermedio/src/Book.cpp > CMakeFiles/BookTester.dir/src/Book.cpp.i

CMakeFiles/BookTester.dir/src/Book.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BookTester.dir/src/Book.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bertaleo/progetto-intermedio/src/Book.cpp -o CMakeFiles/BookTester.dir/src/Book.cpp.s

CMakeFiles/BookTester.dir/src/Date.cpp.o: CMakeFiles/BookTester.dir/flags.make
CMakeFiles/BookTester.dir/src/Date.cpp.o: src/Date.cpp
CMakeFiles/BookTester.dir/src/Date.cpp.o: CMakeFiles/BookTester.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bertaleo/progetto-intermedio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/BookTester.dir/src/Date.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BookTester.dir/src/Date.cpp.o -MF CMakeFiles/BookTester.dir/src/Date.cpp.o.d -o CMakeFiles/BookTester.dir/src/Date.cpp.o -c /home/bertaleo/progetto-intermedio/src/Date.cpp

CMakeFiles/BookTester.dir/src/Date.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BookTester.dir/src/Date.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bertaleo/progetto-intermedio/src/Date.cpp > CMakeFiles/BookTester.dir/src/Date.cpp.i

CMakeFiles/BookTester.dir/src/Date.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BookTester.dir/src/Date.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bertaleo/progetto-intermedio/src/Date.cpp -o CMakeFiles/BookTester.dir/src/Date.cpp.s

CMakeFiles/BookTester.dir/src/test.cpp.o: CMakeFiles/BookTester.dir/flags.make
CMakeFiles/BookTester.dir/src/test.cpp.o: src/test.cpp
CMakeFiles/BookTester.dir/src/test.cpp.o: CMakeFiles/BookTester.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bertaleo/progetto-intermedio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/BookTester.dir/src/test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BookTester.dir/src/test.cpp.o -MF CMakeFiles/BookTester.dir/src/test.cpp.o.d -o CMakeFiles/BookTester.dir/src/test.cpp.o -c /home/bertaleo/progetto-intermedio/src/test.cpp

CMakeFiles/BookTester.dir/src/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BookTester.dir/src/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bertaleo/progetto-intermedio/src/test.cpp > CMakeFiles/BookTester.dir/src/test.cpp.i

CMakeFiles/BookTester.dir/src/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BookTester.dir/src/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bertaleo/progetto-intermedio/src/test.cpp -o CMakeFiles/BookTester.dir/src/test.cpp.s

# Object files for target BookTester
BookTester_OBJECTS = \
"CMakeFiles/BookTester.dir/src/Book.cpp.o" \
"CMakeFiles/BookTester.dir/src/Date.cpp.o" \
"CMakeFiles/BookTester.dir/src/test.cpp.o"

# External object files for target BookTester
BookTester_EXTERNAL_OBJECTS =

BookTester: CMakeFiles/BookTester.dir/src/Book.cpp.o
BookTester: CMakeFiles/BookTester.dir/src/Date.cpp.o
BookTester: CMakeFiles/BookTester.dir/src/test.cpp.o
BookTester: CMakeFiles/BookTester.dir/build.make
BookTester: CMakeFiles/BookTester.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bertaleo/progetto-intermedio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable BookTester"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BookTester.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BookTester.dir/build: BookTester
.PHONY : CMakeFiles/BookTester.dir/build

CMakeFiles/BookTester.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BookTester.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BookTester.dir/clean

CMakeFiles/BookTester.dir/depend:
	cd /home/bertaleo/progetto-intermedio && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bertaleo/progetto-intermedio /home/bertaleo/progetto-intermedio /home/bertaleo/progetto-intermedio /home/bertaleo/progetto-intermedio /home/bertaleo/progetto-intermedio/CMakeFiles/BookTester.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BookTester.dir/depend

