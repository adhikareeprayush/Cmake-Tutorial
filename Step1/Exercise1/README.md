# Exercise 1 - Building a Basic Project

The most basic CMake project is an executable built from a single source code file. For simple projects like this, a CMakeLists.txt file with three commands is all that is required.

**Note:** Although upper, lower, and mixed case commands are supported by CMake, lower case commands are preferred and will be used throughout the tutorial.

Any project's topmost CMakeLists.txt must start by specifying a minimum CMake version using the `cmake_minimum_required()` command. This establishes policy settings and ensures that the following CMake functions are run with a compatible version of CMake.

To start a project, we use the `project()` command to set the project name. This call is required with every project and should be called soon after `cmake_minimum_required()`. As we will see later, this command can also be used to specify other project-level information such as the language or version number.

Finally, the `add_executable()` command tells CMake to create an executable using the specified source code files.

## Goal

Understand how to create a simple CMake project.

## Helpful Resources

- [add_executable()](https://cmake.org/cmake/help/latest/command/add_executable.html)
- [cmake_minimum_required()](https://cmake.org/cmake/help/latest/command/cmake_minimum_required.html)
- [project()](https://cmake.org/cmake/help/latest/command/project.html)

## Files to Edit

- CMakeLists.txt

## Getting Started

The source code for `tutorial.cxx` is provided in the `Help/guide/tutorial/Step1` directory and can be used to compute the square root of a number. This file does not need to be edited in this step.

In the same directory is a `CMakeLists.txt` file which you will complete. Start with TODO 1 and work through TODO 3.

## Build and Run

Once TODO 1 through TODO 3 have been completed, we are ready to build and run our project! First, run the CMake executable or the CMake GUI to configure the project and then build it with your chosen build tool.

For example, from the command line, navigate to the `Help/guide/tutorial` directory of the CMake source code tree and create a build directory:

```sh
mkdir Step1_build
```

Next, navigate to that build directory and run CMake to configure the project and generate a native build system:

```sh
cd Step1_build
cmake ../Step1
```

Then call that build system to actually compile/link the project:

```sh
cmake --build .
```

For multi-config generators (e.g. Visual Studio), first navigate to the appropriate subdirectory, for example:

```sh
cd Debug
```

Finally, try to use the newly built Tutorial:

```sh
Tutorial 4294967296
Tutorial 10
Tutorial
```

**Note:** Depending on the shell, the correct syntax may be `Tutorial`, `./Tutorial`, or `.\Tutorial`. For simplicity, the exercises will use `Tutorial` throughout.

## Solution

As mentioned above, a three-line `CMakeLists.txt` is all that we need to get up and running. The first line is to use `cmake_minimum_required()` to set the CMake version as follows:

**TODO 1:**

```cmake
cmake_minimum_required(VERSION 3.10)
```

The next step to make a basic project is to use the `project()` command as follows to set the project name:

**TODO 2:**

```cmake
project(Tutorial)
```

The last command to call for a basic project is `add_executable()`. We call it as follows:

**TODO 3:**

```cmake
add_executable(Tutorial tutorial.cxx)
```
