
cmake_minimum_required (VERSION 3.22)

project ("Coffeemachine")

include_directories(.)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -O2")

add_executable (Coffeemachine "Coffeemachine.cpp" "Coffeemachine.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Coffeemachine PROPERTY CXX_STANDARD 20)
endif()
