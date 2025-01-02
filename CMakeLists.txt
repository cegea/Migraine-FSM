# Specify the minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and language (C or C++)
project(MigraineFSM VERSION 1.0 LANGUAGES C CXX)

add_subdirectory(FiniteStateMachine)
add_subdirectory(Migraine)
add_subdirectory(main)
