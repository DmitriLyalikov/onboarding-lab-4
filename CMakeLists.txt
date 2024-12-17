cmake_minimum_required(VERSION 3.24)

include(cmake/BootstrapVcpkg.cmake)

project(week-four-lab VERSION 1.0.0)

## Set the C++ standar
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find the required packaages in registry
find_package(nyu-cmake CONFIG REQUIRED)

# create interface library
add_library(lab4 interface)

# add subdirs
add_subdirectory(rtl)

# test setup config
if(NYU_BUILD_TESTS)
  enable_testing()
  add_subdirectory(dv)
endif()

