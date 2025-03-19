cmake_minimum_required(VERSION 3.20)
project(motacpp)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 20)

# 添加头文件目录
include_directories(${PROJECT_SOURCE_DIR}/include)

# 添加主程序和所有依赖的源文件
add_executable(motacpp
        scr/main.cpp
        scr/stage/Floor1.cpp
        scr/stage/Map.cpp
        scr/core/Block.cpp
        scr/lib/Enemy/Enemy.cpp
        scr/core/MapReader.cpp
        scr/core/MapReader.h
        scr/assets/ImgManager.cpp
        include/ImgManager.h
        scr/lib/Hero/Hero.cpp
        scr/lib/Enemy/greenslime.cpp
        include/greenslime.h
)
