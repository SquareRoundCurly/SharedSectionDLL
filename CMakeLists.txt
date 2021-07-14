cmake_minimum_required(VERSION 3.12.0)

project(SSDLL)

set(CMAKE_INSTALL_PREFIX "${CMAKE_CURRENT_SOURCE_DIR}")

add_subdirectory(SharedSectionDLL)
add_subdirectory(WriterProgram)
add_subdirectory(ReaderProgram)