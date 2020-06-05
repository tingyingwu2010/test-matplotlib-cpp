project(MatplotlibC++)
cmake_minimum_required(VERSION 2.8)

find_package(Python COMPONENTS Interpreter Development NumPy)
if (${Python_FOUND})
  include_directories(${Python_INCLUDE_DIRS})
  include_directories(${Python_NumPy_INCLUDE_DIRS})
else()
  message(FATAL_ERROR "Python3 not found, please install it.")
endif()

# Use this line if you have matplotlib-cpp installed at the system level
set(matplotlib_cpp_INCLUDE_DIRS /usr/include/matplotlib-cpp)

# Use this line if you want to use the local matplotlib-cpp in this folder
#set(matplotlib_cpp_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${matplotlib_cpp_INCLUDE_DIRS})

add_executable(minimal minimal.cpp)
target_link_libraries(minimal ${Python_LIBRARIES})

add_executable(bar bar.cpp)
target_link_libraries(bar ${Python_LIBRARIES})

add_executable(subplot subplot.cpp)
target_link_libraries(subplot ${Python_LIBRARIES})
