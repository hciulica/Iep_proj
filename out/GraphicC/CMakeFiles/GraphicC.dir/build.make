# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/out

# Include any dependencies generated for this target.
include GraphicC/CMakeFiles/GraphicC.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include GraphicC/CMakeFiles/GraphicC.dir/compiler_depend.make

# Include the progress variables for this target.
include GraphicC/CMakeFiles/GraphicC.dir/progress.make

# Include the compile flags for this target's objects.
include GraphicC/CMakeFiles/GraphicC.dir/flags.make

GraphicC/CMakeFiles/GraphicC.dir/src/graphicc.cpp.o: GraphicC/CMakeFiles/GraphicC.dir/flags.make
GraphicC/CMakeFiles/GraphicC.dir/src/graphicc.cpp.o: /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/src/GraphicC/src/graphicc.cpp
GraphicC/CMakeFiles/GraphicC.dir/src/graphicc.cpp.o: GraphicC/CMakeFiles/GraphicC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object GraphicC/CMakeFiles/GraphicC.dir/src/graphicc.cpp.o"
	cd /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/out/GraphicC && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT GraphicC/CMakeFiles/GraphicC.dir/src/graphicc.cpp.o -MF CMakeFiles/GraphicC.dir/src/graphicc.cpp.o.d -o CMakeFiles/GraphicC.dir/src/graphicc.cpp.o -c /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/src/GraphicC/src/graphicc.cpp

GraphicC/CMakeFiles/GraphicC.dir/src/graphicc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GraphicC.dir/src/graphicc.cpp.i"
	cd /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/out/GraphicC && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/src/GraphicC/src/graphicc.cpp > CMakeFiles/GraphicC.dir/src/graphicc.cpp.i

GraphicC/CMakeFiles/GraphicC.dir/src/graphicc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GraphicC.dir/src/graphicc.cpp.s"
	cd /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/out/GraphicC && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/src/GraphicC/src/graphicc.cpp -o CMakeFiles/GraphicC.dir/src/graphicc.cpp.s

# Object files for target GraphicC
GraphicC_OBJECTS = \
"CMakeFiles/GraphicC.dir/src/graphicc.cpp.o"

# External object files for target GraphicC
GraphicC_EXTERNAL_OBJECTS =

GraphicC/libGraphicC.a: GraphicC/CMakeFiles/GraphicC.dir/src/graphicc.cpp.o
GraphicC/libGraphicC.a: GraphicC/CMakeFiles/GraphicC.dir/build.make
GraphicC/libGraphicC.a: GraphicC/CMakeFiles/GraphicC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libGraphicC.a"
	cd /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/out/GraphicC && $(CMAKE_COMMAND) -P CMakeFiles/GraphicC.dir/cmake_clean_target.cmake
	cd /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/out/GraphicC && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GraphicC.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
GraphicC/CMakeFiles/GraphicC.dir/build: GraphicC/libGraphicC.a
.PHONY : GraphicC/CMakeFiles/GraphicC.dir/build

GraphicC/CMakeFiles/GraphicC.dir/clean:
	cd /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/out/GraphicC && $(CMAKE_COMMAND) -P CMakeFiles/GraphicC.dir/cmake_clean.cmake
.PHONY : GraphicC/CMakeFiles/GraphicC.dir/clean

GraphicC/CMakeFiles/GraphicC.dir/depend:
	cd /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/out && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/src /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/src/GraphicC /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/out /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/out/GraphicC /Users/horiaciulica/Documents/IEPLAB/Iep_proj/Iep_proj/out/GraphicC/CMakeFiles/GraphicC.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : GraphicC/CMakeFiles/GraphicC.dir/depend

