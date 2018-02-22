cmake_minimum_required(VERSION 3.5)
project(Workflow)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenCV REQUIRED)

add_executable(Workflow main.cpp)
target_link_libraries(Workflow ${OpenCV_LIBS})
set_target_properties(Workflow PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
