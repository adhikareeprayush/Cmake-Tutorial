cmake_minimum_required(VERSION 3.2)

project(Exercise_3 VERSION 1.0)

# Configure the header file to pass some of the CMake settings to the source code
configure_file(TutorialConfig.h.in ${CMAKE_BINARY_DIR}/TutorialConfig.h)

# Add the executable
add_executable(exercise_3 src/main.cpp)

# Set the include directories for the target
target_include_directories(exercise_3 PUBLIC
                           "${CMAKE_BINARY_DIR}"
                           )
