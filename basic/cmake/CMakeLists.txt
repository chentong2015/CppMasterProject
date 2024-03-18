# 设置cmake最低版本要求
cmake_minimum_required(VERSION 3.27)

# 设置编译的项目名称
project (Cpp_Master)

# 设置编译的C++版本，Flag标签(显示所有warning)，项目源代码目录
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++17")
set (source_dir "${PROJECT_SOURCE_DIR}/src/")  # 自定义全局变量

file (GLOB source_files "${source_dir}/*.cpp") # 项目所有的源代码

# 指定要编译的项目和文件
add_executable(Cpp_Master ${source_files})