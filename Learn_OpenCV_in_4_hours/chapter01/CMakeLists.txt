cmake_minimum_required(VERSION 3.28.0)

set(VERSION "0.0.1")
set(PROJECT_NAME "chapter01")
set(CMAKE_CXX_STANDARD 23)
project(${PROJECT_NAME} VERSION ${VERSION} LANGUAGES CXX)

# 使用find_package命令查找OpenCV库
find_package(OpenCV REQUIRED)

if (OpenCV_FOUND)
    message(STATUS "OpenCV library status:")
    message(STATUS "    version: ${OpenCV_VERSION}")
    message(STATUS "    libraries: ${OpenCV_LIBS}")
    message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")
else()
    message(FATAL_ERROR "Could not find OpenCV library")
endif()
# 添加头文件
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} chapter1.cpp)

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})

