# 这个是cmake最小版本要求
cmake_minimum_required(VERSION 3.1)
# Enable C++11，这一段是源码里的
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# 填写你的项目名称Project
project(RM1)

# SET指令可以用来显式的定义变量.set the directory of executable files
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${RM1_SOURCE_DIR}/bin)

# 这一句是寻找你的OpenCV位置
find_package(OpenCV REQUIRED)
# 这个指令用来设置包含的头文件的路径
include_directories(${OpenCV_INCLUDE_DIRS})
# 把项目名和源文件名填上
add_executable(RM1 src/RM1.cpp)
# 这个指令用来设置库文件的路径
link_directories(${OpenCV_LIBRARY_DIRS})
# 这个指令用来设置需要的库文件
target_link_libraries(RM1 ${OpenCV_LIBS})
