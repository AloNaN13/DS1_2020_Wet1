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
CMAKE_COMMAND = /cygdrive/c/Users/User/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/User/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DS1_2020_Wet1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DS1_2020_Wet1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DS1_2020_Wet1.dir/flags.make

CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.o: CMakeFiles/DS1_2020_Wet1.dir/flags.make
CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.o: ../main1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.o -c /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/main1.cpp

CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/main1.cpp > CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.i

CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/main1.cpp -o CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.s

CMakeFiles/DS1_2020_Wet1.dir/List.cpp.o: CMakeFiles/DS1_2020_Wet1.dir/flags.make
CMakeFiles/DS1_2020_Wet1.dir/List.cpp.o: ../List.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DS1_2020_Wet1.dir/List.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DS1_2020_Wet1.dir/List.cpp.o -c /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/List.cpp

CMakeFiles/DS1_2020_Wet1.dir/List.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DS1_2020_Wet1.dir/List.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/List.cpp > CMakeFiles/DS1_2020_Wet1.dir/List.cpp.i

CMakeFiles/DS1_2020_Wet1.dir/List.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DS1_2020_Wet1.dir/List.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/List.cpp -o CMakeFiles/DS1_2020_Wet1.dir/List.cpp.s

# Object files for target DS1_2020_Wet1
DS1_2020_Wet1_OBJECTS = \
"CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.o" \
"CMakeFiles/DS1_2020_Wet1.dir/List.cpp.o"

# External object files for target DS1_2020_Wet1
DS1_2020_Wet1_EXTERNAL_OBJECTS =

DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.o
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/List.cpp.o
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/build.make
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable DS1_2020_Wet1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DS1_2020_Wet1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DS1_2020_Wet1.dir/build: DS1_2020_Wet1.exe

.PHONY : CMakeFiles/DS1_2020_Wet1.dir/build

CMakeFiles/DS1_2020_Wet1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DS1_2020_Wet1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DS1_2020_Wet1.dir/clean

CMakeFiles/DS1_2020_Wet1.dir/depend:
	cd /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1 /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1 /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug/CMakeFiles/DS1_2020_Wet1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DS1_2020_Wet1.dir/depend
