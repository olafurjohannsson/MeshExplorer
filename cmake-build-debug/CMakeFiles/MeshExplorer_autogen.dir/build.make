# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/olafurj/CLion-2019.1.4/clion-2019.1.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/olafurj/CLion-2019.1.4/clion-2019.1.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/olafurj/MeshExplorer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/olafurj/MeshExplorer/cmake-build-debug

# Utility rule file for MeshExplorer_autogen.

# Include the progress variables for this target.
include CMakeFiles/MeshExplorer_autogen.dir/progress.make

CMakeFiles/MeshExplorer_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/olafurj/MeshExplorer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target MeshExplorer"
	/home/olafurj/CLion-2019.1.4/clion-2019.1.4/bin/cmake/linux/bin/cmake -E cmake_autogen /home/olafurj/MeshExplorer/cmake-build-debug/CMakeFiles/MeshExplorer_autogen.dir/AutogenInfo.cmake Debug

MeshExplorer_autogen: CMakeFiles/MeshExplorer_autogen
MeshExplorer_autogen: CMakeFiles/MeshExplorer_autogen.dir/build.make

.PHONY : MeshExplorer_autogen

# Rule to build all files generated by this target.
CMakeFiles/MeshExplorer_autogen.dir/build: MeshExplorer_autogen

.PHONY : CMakeFiles/MeshExplorer_autogen.dir/build

CMakeFiles/MeshExplorer_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MeshExplorer_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MeshExplorer_autogen.dir/clean

CMakeFiles/MeshExplorer_autogen.dir/depend:
	cd /home/olafurj/MeshExplorer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/olafurj/MeshExplorer /home/olafurj/MeshExplorer /home/olafurj/MeshExplorer/cmake-build-debug /home/olafurj/MeshExplorer/cmake-build-debug /home/olafurj/MeshExplorer/cmake-build-debug/CMakeFiles/MeshExplorer_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MeshExplorer_autogen.dir/depend

