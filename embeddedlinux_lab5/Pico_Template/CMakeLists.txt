cmake_minimum_required(VERSION 3.12)

# Include build functions from Pico SDK
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

# Set name of project (as PROJECT_NAME) and C / C++ standards
project(PICO_TEMPLATE C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialize the Pico SDK
pico_sdk_init()

# Add compiler warnings
add_compile_options(-Wall
                    -Wno-format  # int != int32_t as far as the compiler is concerned because gcc has int32_t as long int
                    -Wno-unused-function # we have some for the docs that aren't called
                    -Wno-maybe-uninitialized)

# Define paths
set(project_path "src")
file(GLOB_RECURSE SRC_FILES "${project_path}/*.c")

set(INCLUDE_DIR "include")

# Add executable
add_executable(${PROJECT_NAME} ${SRC_FILES})

# Add target for custom header files
target_include_directories(${PROJECT_NAME} PRIVATE ${INCLUDE_DIR})

# Link Pico SDK libraries
target_link_libraries(${PROJECT_NAME}
                      pico_stdlib
)

# Enable USB output, disable UART output
pico_enable_stdio_usb(${PROJECT_NAME} 0)
pico_enable_stdio_uart(${PROJECT_NAME} 1)

# Create map/bin/hex/uf2 files
pico_add_extra_outputs(${PROJECT_NAME})

