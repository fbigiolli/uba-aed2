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
CMAKE_SOURCE_DIR = /home/felipe/Documentos/uba-aed2/labo07

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/felipe/Documentos/uba-aed2/labo07

# Include any dependencies generated for this target.
include CMakeFiles/ej8.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ej8.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ej8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ej8.dir/flags.make

CMakeFiles/ej8.dir/tests/test_templates.cpp.o: CMakeFiles/ej8.dir/flags.make
CMakeFiles/ej8.dir/tests/test_templates.cpp.o: tests/test_templates.cpp
CMakeFiles/ej8.dir/tests/test_templates.cpp.o: CMakeFiles/ej8.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/felipe/Documentos/uba-aed2/labo07/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ej8.dir/tests/test_templates.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ej8.dir/tests/test_templates.cpp.o -MF CMakeFiles/ej8.dir/tests/test_templates.cpp.o.d -o CMakeFiles/ej8.dir/tests/test_templates.cpp.o -c /home/felipe/Documentos/uba-aed2/labo07/tests/test_templates.cpp

CMakeFiles/ej8.dir/tests/test_templates.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ej8.dir/tests/test_templates.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/felipe/Documentos/uba-aed2/labo07/tests/test_templates.cpp > CMakeFiles/ej8.dir/tests/test_templates.cpp.i

CMakeFiles/ej8.dir/tests/test_templates.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ej8.dir/tests/test_templates.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/felipe/Documentos/uba-aed2/labo07/tests/test_templates.cpp -o CMakeFiles/ej8.dir/tests/test_templates.cpp.s

CMakeFiles/ej8.dir/tests/test_diccionario.cpp.o: CMakeFiles/ej8.dir/flags.make
CMakeFiles/ej8.dir/tests/test_diccionario.cpp.o: tests/test_diccionario.cpp
CMakeFiles/ej8.dir/tests/test_diccionario.cpp.o: CMakeFiles/ej8.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/felipe/Documentos/uba-aed2/labo07/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ej8.dir/tests/test_diccionario.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ej8.dir/tests/test_diccionario.cpp.o -MF CMakeFiles/ej8.dir/tests/test_diccionario.cpp.o.d -o CMakeFiles/ej8.dir/tests/test_diccionario.cpp.o -c /home/felipe/Documentos/uba-aed2/labo07/tests/test_diccionario.cpp

CMakeFiles/ej8.dir/tests/test_diccionario.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ej8.dir/tests/test_diccionario.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/felipe/Documentos/uba-aed2/labo07/tests/test_diccionario.cpp > CMakeFiles/ej8.dir/tests/test_diccionario.cpp.i

CMakeFiles/ej8.dir/tests/test_diccionario.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ej8.dir/tests/test_diccionario.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/felipe/Documentos/uba-aed2/labo07/tests/test_diccionario.cpp -o CMakeFiles/ej8.dir/tests/test_diccionario.cpp.s

CMakeFiles/ej8.dir/tests/test_multiconjunto.cpp.o: CMakeFiles/ej8.dir/flags.make
CMakeFiles/ej8.dir/tests/test_multiconjunto.cpp.o: tests/test_multiconjunto.cpp
CMakeFiles/ej8.dir/tests/test_multiconjunto.cpp.o: CMakeFiles/ej8.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/felipe/Documentos/uba-aed2/labo07/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ej8.dir/tests/test_multiconjunto.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ej8.dir/tests/test_multiconjunto.cpp.o -MF CMakeFiles/ej8.dir/tests/test_multiconjunto.cpp.o.d -o CMakeFiles/ej8.dir/tests/test_multiconjunto.cpp.o -c /home/felipe/Documentos/uba-aed2/labo07/tests/test_multiconjunto.cpp

CMakeFiles/ej8.dir/tests/test_multiconjunto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ej8.dir/tests/test_multiconjunto.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/felipe/Documentos/uba-aed2/labo07/tests/test_multiconjunto.cpp > CMakeFiles/ej8.dir/tests/test_multiconjunto.cpp.i

CMakeFiles/ej8.dir/tests/test_multiconjunto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ej8.dir/tests/test_multiconjunto.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/felipe/Documentos/uba-aed2/labo07/tests/test_multiconjunto.cpp -o CMakeFiles/ej8.dir/tests/test_multiconjunto.cpp.s

# Object files for target ej8
ej8_OBJECTS = \
"CMakeFiles/ej8.dir/tests/test_templates.cpp.o" \
"CMakeFiles/ej8.dir/tests/test_diccionario.cpp.o" \
"CMakeFiles/ej8.dir/tests/test_multiconjunto.cpp.o"

# External object files for target ej8
ej8_EXTERNAL_OBJECTS =

ej8: CMakeFiles/ej8.dir/tests/test_templates.cpp.o
ej8: CMakeFiles/ej8.dir/tests/test_diccionario.cpp.o
ej8: CMakeFiles/ej8.dir/tests/test_multiconjunto.cpp.o
ej8: CMakeFiles/ej8.dir/build.make
ej8: libgtest.a
ej8: libgtest_main.a
ej8: CMakeFiles/ej8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/felipe/Documentos/uba-aed2/labo07/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ej8"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ej8.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ej8.dir/build: ej8
.PHONY : CMakeFiles/ej8.dir/build

CMakeFiles/ej8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ej8.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ej8.dir/clean

CMakeFiles/ej8.dir/depend:
	cd /home/felipe/Documentos/uba-aed2/labo07 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/felipe/Documentos/uba-aed2/labo07 /home/felipe/Documentos/uba-aed2/labo07 /home/felipe/Documentos/uba-aed2/labo07 /home/felipe/Documentos/uba-aed2/labo07 /home/felipe/Documentos/uba-aed2/labo07/CMakeFiles/ej8.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ej8.dir/depend

