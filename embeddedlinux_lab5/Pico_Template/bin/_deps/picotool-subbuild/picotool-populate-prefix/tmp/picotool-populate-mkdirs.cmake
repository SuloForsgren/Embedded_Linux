# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/home/sulo/dev/programming/iot/School/Embedded_Linux/Lab5/Pico_Template/bin/_deps/picotool-src")
  file(MAKE_DIRECTORY "/home/sulo/dev/programming/iot/School/Embedded_Linux/Lab5/Pico_Template/bin/_deps/picotool-src")
endif()
file(MAKE_DIRECTORY
  "/home/sulo/dev/programming/iot/School/Embedded_Linux/Lab5/Pico_Template/bin/_deps/picotool-build"
  "/home/sulo/dev/programming/iot/School/Embedded_Linux/Lab5/Pico_Template/bin/_deps/picotool-subbuild/picotool-populate-prefix"
  "/home/sulo/dev/programming/iot/School/Embedded_Linux/Lab5/Pico_Template/bin/_deps/picotool-subbuild/picotool-populate-prefix/tmp"
  "/home/sulo/dev/programming/iot/School/Embedded_Linux/Lab5/Pico_Template/bin/_deps/picotool-subbuild/picotool-populate-prefix/src/picotool-populate-stamp"
  "/home/sulo/dev/programming/iot/School/Embedded_Linux/Lab5/Pico_Template/bin/_deps/picotool-subbuild/picotool-populate-prefix/src"
  "/home/sulo/dev/programming/iot/School/Embedded_Linux/Lab5/Pico_Template/bin/_deps/picotool-subbuild/picotool-populate-prefix/src/picotool-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/sulo/dev/programming/iot/School/Embedded_Linux/Lab5/Pico_Template/bin/_deps/picotool-subbuild/picotool-populate-prefix/src/picotool-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/sulo/dev/programming/iot/School/Embedded_Linux/Lab5/Pico_Template/bin/_deps/picotool-subbuild/picotool-populate-prefix/src/picotool-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
