# CMAKE generated file: DO NOT EDIT!
<<<<<<< Updated upstream
# Generated by "Unix Makefiles" Generator, CMake Version 3.15
=======
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17
>>>>>>> Stashed changes

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


<<<<<<< Updated upstream
# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =
=======
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

>>>>>>> Stashed changes

.SUFFIXES: .hpux_make_needs_suffix_list


<<<<<<< Updated upstream
=======
# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

>>>>>>> Stashed changes
# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

<<<<<<< Updated upstream
# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/User/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/User/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe -E remove -f
=======
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E rm -f
>>>>>>> Stashed changes

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
<<<<<<< Updated upstream
CMAKE_SOURCE_DIR = /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug
=======
CMAKE_SOURCE_DIR = C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\cmake-build-debug
>>>>>>> Stashed changes

# Include any dependencies generated for this target.
include CMakeFiles/DS1_2020_Wet1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DS1_2020_Wet1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DS1_2020_Wet1.dir/flags.make

<<<<<<< Updated upstream
CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.o: CMakeFiles/DS1_2020_Wet1.dir/flags.make
CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.o: ../Course.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.o -c /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/Course.cpp

CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/Course.cpp > CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.i

CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/Course.cpp -o CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.s

CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.o: CMakeFiles/DS1_2020_Wet1.dir/flags.make
CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.o: ../CoursesManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.o -c /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/CoursesManager.cpp

CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/CoursesManager.cpp > CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.i

CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/CoursesManager.cpp -o CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.s

CMakeFiles/DS1_2020_Wet1.dir/library.cpp.o: CMakeFiles/DS1_2020_Wet1.dir/flags.make
CMakeFiles/DS1_2020_Wet1.dir/library.cpp.o: ../library.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/DS1_2020_Wet1.dir/library.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DS1_2020_Wet1.dir/library.cpp.o -c /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/library.cpp

CMakeFiles/DS1_2020_Wet1.dir/library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DS1_2020_Wet1.dir/library.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/library.cpp > CMakeFiles/DS1_2020_Wet1.dir/library.cpp.i

CMakeFiles/DS1_2020_Wet1.dir/library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DS1_2020_Wet1.dir/library.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/library.cpp -o CMakeFiles/DS1_2020_Wet1.dir/library.cpp.s

CMakeFiles/DS1_2020_Wet1.dir/List.cpp.o: CMakeFiles/DS1_2020_Wet1.dir/flags.make
CMakeFiles/DS1_2020_Wet1.dir/List.cpp.o: ../List.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/DS1_2020_Wet1.dir/List.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DS1_2020_Wet1.dir/List.cpp.o -c /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/List.cpp

CMakeFiles/DS1_2020_Wet1.dir/List.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DS1_2020_Wet1.dir/List.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/List.cpp > CMakeFiles/DS1_2020_Wet1.dir/List.cpp.i

CMakeFiles/DS1_2020_Wet1.dir/List.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DS1_2020_Wet1.dir/List.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/List.cpp -o CMakeFiles/DS1_2020_Wet1.dir/List.cpp.s

CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.o: CMakeFiles/DS1_2020_Wet1.dir/flags.make
CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.o: ../main1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.o -c /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/main1.cpp

CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/main1.cpp > CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.i

CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/main1.cpp -o CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.s

CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.o: CMakeFiles/DS1_2020_Wet1.dir/flags.make
CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.o: ../MyClass.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.o -c /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/MyClass.cpp

CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/MyClass.cpp > CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.i

CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/MyClass.cpp -o CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.s

# Object files for target DS1_2020_Wet1
DS1_2020_Wet1_OBJECTS = \
"CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.o" \
"CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.o" \
"CMakeFiles/DS1_2020_Wet1.dir/library.cpp.o" \
"CMakeFiles/DS1_2020_Wet1.dir/List.cpp.o" \
"CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.o" \
"CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.o"
=======
CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.obj: CMakeFiles/DS1_2020_Wet1.dir/flags.make
CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.obj: CMakeFiles/DS1_2020_Wet1.dir/includes_CXX.rsp
CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.obj: ../Course.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DS1_2020_Wet1.dir\Course.cpp.obj -c C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\Course.cpp

CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\Course.cpp > CMakeFiles\DS1_2020_Wet1.dir\Course.cpp.i

CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\Course.cpp -o CMakeFiles\DS1_2020_Wet1.dir\Course.cpp.s

CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.obj: CMakeFiles/DS1_2020_Wet1.dir/flags.make
CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.obj: CMakeFiles/DS1_2020_Wet1.dir/includes_CXX.rsp
CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.obj: ../CoursesManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DS1_2020_Wet1.dir\CoursesManager.cpp.obj -c C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\CoursesManager.cpp

CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\CoursesManager.cpp > CMakeFiles\DS1_2020_Wet1.dir\CoursesManager.cpp.i

CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\CoursesManager.cpp -o CMakeFiles\DS1_2020_Wet1.dir\CoursesManager.cpp.s

CMakeFiles/DS1_2020_Wet1.dir/library.cpp.obj: CMakeFiles/DS1_2020_Wet1.dir/flags.make
CMakeFiles/DS1_2020_Wet1.dir/library.cpp.obj: CMakeFiles/DS1_2020_Wet1.dir/includes_CXX.rsp
CMakeFiles/DS1_2020_Wet1.dir/library.cpp.obj: ../library.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/DS1_2020_Wet1.dir/library.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DS1_2020_Wet1.dir\library.cpp.obj -c C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\library.cpp

CMakeFiles/DS1_2020_Wet1.dir/library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DS1_2020_Wet1.dir/library.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\library.cpp > CMakeFiles\DS1_2020_Wet1.dir\library.cpp.i

CMakeFiles/DS1_2020_Wet1.dir/library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DS1_2020_Wet1.dir/library.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\library.cpp -o CMakeFiles\DS1_2020_Wet1.dir\library.cpp.s

CMakeFiles/DS1_2020_Wet1.dir/List.cpp.obj: CMakeFiles/DS1_2020_Wet1.dir/flags.make
CMakeFiles/DS1_2020_Wet1.dir/List.cpp.obj: CMakeFiles/DS1_2020_Wet1.dir/includes_CXX.rsp
CMakeFiles/DS1_2020_Wet1.dir/List.cpp.obj: ../List.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/DS1_2020_Wet1.dir/List.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DS1_2020_Wet1.dir\List.cpp.obj -c C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\List.cpp

CMakeFiles/DS1_2020_Wet1.dir/List.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DS1_2020_Wet1.dir/List.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\List.cpp > CMakeFiles\DS1_2020_Wet1.dir\List.cpp.i

CMakeFiles/DS1_2020_Wet1.dir/List.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DS1_2020_Wet1.dir/List.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\List.cpp -o CMakeFiles\DS1_2020_Wet1.dir\List.cpp.s

CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.obj: CMakeFiles/DS1_2020_Wet1.dir/flags.make
CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.obj: CMakeFiles/DS1_2020_Wet1.dir/includes_CXX.rsp
CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.obj: ../main1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DS1_2020_Wet1.dir\main1.cpp.obj -c C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\main1.cpp

CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\main1.cpp > CMakeFiles\DS1_2020_Wet1.dir\main1.cpp.i

CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\main1.cpp -o CMakeFiles\DS1_2020_Wet1.dir\main1.cpp.s

CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.obj: CMakeFiles/DS1_2020_Wet1.dir/flags.make
CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.obj: CMakeFiles/DS1_2020_Wet1.dir/includes_CXX.rsp
CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.obj: ../MyClass.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DS1_2020_Wet1.dir\MyClass.cpp.obj -c C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\MyClass.cpp

CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\MyClass.cpp > CMakeFiles\DS1_2020_Wet1.dir\MyClass.cpp.i

CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\MyClass.cpp -o CMakeFiles\DS1_2020_Wet1.dir\MyClass.cpp.s

CMakeFiles/DS1_2020_Wet1.dir/Views.cpp.obj: CMakeFiles/DS1_2020_Wet1.dir/flags.make
CMakeFiles/DS1_2020_Wet1.dir/Views.cpp.obj: CMakeFiles/DS1_2020_Wet1.dir/includes_CXX.rsp
CMakeFiles/DS1_2020_Wet1.dir/Views.cpp.obj: ../Views.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/DS1_2020_Wet1.dir/Views.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DS1_2020_Wet1.dir\Views.cpp.obj -c C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\Views.cpp

CMakeFiles/DS1_2020_Wet1.dir/Views.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DS1_2020_Wet1.dir/Views.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\Views.cpp > CMakeFiles\DS1_2020_Wet1.dir\Views.cpp.i

CMakeFiles/DS1_2020_Wet1.dir/Views.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DS1_2020_Wet1.dir/Views.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\Views.cpp -o CMakeFiles\DS1_2020_Wet1.dir\Views.cpp.s

# Object files for target DS1_2020_Wet1
DS1_2020_Wet1_OBJECTS = \
"CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.obj" \
"CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.obj" \
"CMakeFiles/DS1_2020_Wet1.dir/library.cpp.obj" \
"CMakeFiles/DS1_2020_Wet1.dir/List.cpp.obj" \
"CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.obj" \
"CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.obj" \
"CMakeFiles/DS1_2020_Wet1.dir/Views.cpp.obj"
>>>>>>> Stashed changes

# External object files for target DS1_2020_Wet1
DS1_2020_Wet1_EXTERNAL_OBJECTS =

<<<<<<< Updated upstream
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.o
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.o
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/library.cpp.o
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/List.cpp.o
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.o
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.o
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/build.make
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable DS1_2020_Wet1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DS1_2020_Wet1.dir/link.txt --verbose=$(VERBOSE)
=======
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/Course.cpp.obj
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/CoursesManager.cpp.obj
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/library.cpp.obj
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/List.cpp.obj
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/main1.cpp.obj
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/MyClass.cpp.obj
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/Views.cpp.obj
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/build.make
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/linklibs.rsp
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/objects1.rsp
DS1_2020_Wet1.exe: CMakeFiles/DS1_2020_Wet1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable DS1_2020_Wet1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\DS1_2020_Wet1.dir\link.txt --verbose=$(VERBOSE)
>>>>>>> Stashed changes

# Rule to build all files generated by this target.
CMakeFiles/DS1_2020_Wet1.dir/build: DS1_2020_Wet1.exe

.PHONY : CMakeFiles/DS1_2020_Wet1.dir/build

CMakeFiles/DS1_2020_Wet1.dir/clean:
<<<<<<< Updated upstream
	$(CMAKE_COMMAND) -P CMakeFiles/DS1_2020_Wet1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DS1_2020_Wet1.dir/clean

CMakeFiles/DS1_2020_Wet1.dir/depend:
	cd /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1 /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1 /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug /cygdrive/c/CS_Technion/234218-Data_Structures_1/Winter2021/DS1_2020_Wet1/cmake-build-debug/CMakeFiles/DS1_2020_Wet1.dir/DependInfo.cmake --color=$(COLOR)
=======
	$(CMAKE_COMMAND) -P CMakeFiles\DS1_2020_Wet1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/DS1_2020_Wet1.dir/clean

CMakeFiles/DS1_2020_Wet1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1 C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1 C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\cmake-build-debug C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\cmake-build-debug C:\Users\svet\Downloads\Documents\Projects\mivney\DS1_2020_Wet1\cmake-build-debug\CMakeFiles\DS1_2020_Wet1.dir\DependInfo.cmake --color=$(COLOR)
>>>>>>> Stashed changes
.PHONY : CMakeFiles/DS1_2020_Wet1.dir/depend

