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
CMAKE_SOURCE_DIR = /home/felipe/Documentos/uba-aed2/labo04

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/felipe/Documentos/uba-aed2/labo04

# Include any dependencies generated for this target.
include CMakeFiles/ej4.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ej4.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ej4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ej4.dir/flags.make

CMakeFiles/ej4.dir/tests/sdm_tests.cpp.o: CMakeFiles/ej4.dir/flags.make
CMakeFiles/ej4.dir/tests/sdm_tests.cpp.o: tests/sdm_tests.cpp
CMakeFiles/ej4.dir/tests/sdm_tests.cpp.o: CMakeFiles/ej4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/felipe/Documentos/uba-aed2/labo04/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ej4.dir/tests/sdm_tests.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ej4.dir/tests/sdm_tests.cpp.o -MF CMakeFiles/ej4.dir/tests/sdm_tests.cpp.o.d -o CMakeFiles/ej4.dir/tests/sdm_tests.cpp.o -c /home/felipe/Documentos/uba-aed2/labo04/tests/sdm_tests.cpp

CMakeFiles/ej4.dir/tests/sdm_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ej4.dir/tests/sdm_tests.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/felipe/Documentos/uba-aed2/labo04/tests/sdm_tests.cpp > CMakeFiles/ej4.dir/tests/sdm_tests.cpp.i

CMakeFiles/ej4.dir/tests/sdm_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ej4.dir/tests/sdm_tests.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/felipe/Documentos/uba-aed2/labo04/tests/sdm_tests.cpp -o CMakeFiles/ej4.dir/tests/sdm_tests.cpp.s

CMakeFiles/ej4.dir/src/SistemaDeMensajes.cpp.o: CMakeFiles/ej4.dir/flags.make
CMakeFiles/ej4.dir/src/SistemaDeMensajes.cpp.o: src/SistemaDeMensajes.cpp
CMakeFiles/ej4.dir/src/SistemaDeMensajes.cpp.o: CMakeFiles/ej4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/felipe/Documentos/uba-aed2/labo04/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ej4.dir/src/SistemaDeMensajes.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ej4.dir/src/SistemaDeMensajes.cpp.o -MF CMakeFiles/ej4.dir/src/SistemaDeMensajes.cpp.o.d -o CMakeFiles/ej4.dir/src/SistemaDeMensajes.cpp.o -c /home/felipe/Documentos/uba-aed2/labo04/src/SistemaDeMensajes.cpp

CMakeFiles/ej4.dir/src/SistemaDeMensajes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ej4.dir/src/SistemaDeMensajes.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/felipe/Documentos/uba-aed2/labo04/src/SistemaDeMensajes.cpp > CMakeFiles/ej4.dir/src/SistemaDeMensajes.cpp.i

CMakeFiles/ej4.dir/src/SistemaDeMensajes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ej4.dir/src/SistemaDeMensajes.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/felipe/Documentos/uba-aed2/labo04/src/SistemaDeMensajes.cpp -o CMakeFiles/ej4.dir/src/SistemaDeMensajes.cpp.s

CMakeFiles/ej4.dir/src/Proxy.cpp.o: CMakeFiles/ej4.dir/flags.make
CMakeFiles/ej4.dir/src/Proxy.cpp.o: src/Proxy.cpp
CMakeFiles/ej4.dir/src/Proxy.cpp.o: CMakeFiles/ej4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/felipe/Documentos/uba-aed2/labo04/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ej4.dir/src/Proxy.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ej4.dir/src/Proxy.cpp.o -MF CMakeFiles/ej4.dir/src/Proxy.cpp.o.d -o CMakeFiles/ej4.dir/src/Proxy.cpp.o -c /home/felipe/Documentos/uba-aed2/labo04/src/Proxy.cpp

CMakeFiles/ej4.dir/src/Proxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ej4.dir/src/Proxy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/felipe/Documentos/uba-aed2/labo04/src/Proxy.cpp > CMakeFiles/ej4.dir/src/Proxy.cpp.i

CMakeFiles/ej4.dir/src/Proxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ej4.dir/src/Proxy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/felipe/Documentos/uba-aed2/labo04/src/Proxy.cpp -o CMakeFiles/ej4.dir/src/Proxy.cpp.s

CMakeFiles/ej4.dir/src/Internet.cpp.o: CMakeFiles/ej4.dir/flags.make
CMakeFiles/ej4.dir/src/Internet.cpp.o: src/Internet.cpp
CMakeFiles/ej4.dir/src/Internet.cpp.o: CMakeFiles/ej4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/felipe/Documentos/uba-aed2/labo04/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ej4.dir/src/Internet.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ej4.dir/src/Internet.cpp.o -MF CMakeFiles/ej4.dir/src/Internet.cpp.o.d -o CMakeFiles/ej4.dir/src/Internet.cpp.o -c /home/felipe/Documentos/uba-aed2/labo04/src/Internet.cpp

CMakeFiles/ej4.dir/src/Internet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ej4.dir/src/Internet.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/felipe/Documentos/uba-aed2/labo04/src/Internet.cpp > CMakeFiles/ej4.dir/src/Internet.cpp.i

CMakeFiles/ej4.dir/src/Internet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ej4.dir/src/Internet.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/felipe/Documentos/uba-aed2/labo04/src/Internet.cpp -o CMakeFiles/ej4.dir/src/Internet.cpp.s

CMakeFiles/ej4.dir/src/ConexionJugador.cpp.o: CMakeFiles/ej4.dir/flags.make
CMakeFiles/ej4.dir/src/ConexionJugador.cpp.o: src/ConexionJugador.cpp
CMakeFiles/ej4.dir/src/ConexionJugador.cpp.o: CMakeFiles/ej4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/felipe/Documentos/uba-aed2/labo04/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ej4.dir/src/ConexionJugador.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ej4.dir/src/ConexionJugador.cpp.o -MF CMakeFiles/ej4.dir/src/ConexionJugador.cpp.o.d -o CMakeFiles/ej4.dir/src/ConexionJugador.cpp.o -c /home/felipe/Documentos/uba-aed2/labo04/src/ConexionJugador.cpp

CMakeFiles/ej4.dir/src/ConexionJugador.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ej4.dir/src/ConexionJugador.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/felipe/Documentos/uba-aed2/labo04/src/ConexionJugador.cpp > CMakeFiles/ej4.dir/src/ConexionJugador.cpp.i

CMakeFiles/ej4.dir/src/ConexionJugador.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ej4.dir/src/ConexionJugador.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/felipe/Documentos/uba-aed2/labo04/src/ConexionJugador.cpp -o CMakeFiles/ej4.dir/src/ConexionJugador.cpp.s

# Object files for target ej4
ej4_OBJECTS = \
"CMakeFiles/ej4.dir/tests/sdm_tests.cpp.o" \
"CMakeFiles/ej4.dir/src/SistemaDeMensajes.cpp.o" \
"CMakeFiles/ej4.dir/src/Proxy.cpp.o" \
"CMakeFiles/ej4.dir/src/Internet.cpp.o" \
"CMakeFiles/ej4.dir/src/ConexionJugador.cpp.o"

# External object files for target ej4
ej4_EXTERNAL_OBJECTS =

ej4: CMakeFiles/ej4.dir/tests/sdm_tests.cpp.o
ej4: CMakeFiles/ej4.dir/src/SistemaDeMensajes.cpp.o
ej4: CMakeFiles/ej4.dir/src/Proxy.cpp.o
ej4: CMakeFiles/ej4.dir/src/Internet.cpp.o
ej4: CMakeFiles/ej4.dir/src/ConexionJugador.cpp.o
ej4: CMakeFiles/ej4.dir/build.make
ej4: libgtest.a
ej4: libgtest_main.a
ej4: CMakeFiles/ej4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/felipe/Documentos/uba-aed2/labo04/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable ej4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ej4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ej4.dir/build: ej4
.PHONY : CMakeFiles/ej4.dir/build

CMakeFiles/ej4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ej4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ej4.dir/clean

CMakeFiles/ej4.dir/depend:
	cd /home/felipe/Documentos/uba-aed2/labo04 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/felipe/Documentos/uba-aed2/labo04 /home/felipe/Documentos/uba-aed2/labo04 /home/felipe/Documentos/uba-aed2/labo04 /home/felipe/Documentos/uba-aed2/labo04 /home/felipe/Documentos/uba-aed2/labo04/CMakeFiles/ej4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ej4.dir/depend

