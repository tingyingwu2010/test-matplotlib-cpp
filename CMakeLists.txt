project(MatplotlibC++)
cmake_minimum_required(VERSION 2.8)

find_package(Python COMPONENTS Interpreter Development NumPy)
if (${Python_FOUND})
  include_directories(${Python_INCLUDE_DIRS})
  include_directories(${Python_NumPy_INCLUDE_DIRS})
else()
  message(FATAL_ERROR "Python3 not found, please install it.")
endif()

add_executable(minimal minimal.cpp matplotlibcpp.h)
target_link_libraries(minimal ${Python_LIBRARIES})

add_executable(bar bar.cpp matplotlibcpp.h)
target_link_libraries(bar ${Python_LIBRARIES})

add_executable(subplot subplot.cpp matplotlibcpp.h)
target_link_libraries(subplot ${Python_LIBRARIES})
