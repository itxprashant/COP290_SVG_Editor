cmake_minimum_required(VERSION 3.10)
project(MicroVectorEditor)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON) # For Q_OBJECT macros
set(CMAKE_AUTOUIC ON) # For .ui files
set(CMAKE_AUTORCC ON) # For .qrc files

find_package(Qt6 REQUIRED COMPONENTS Widgets Gui Core)

include_directories(include)

set(SOURCES
    src/Canvas.cpp
    src/FileFunctions.cpp
    src/Parser.cpp
    src/Shape.cpp
    src/main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets Qt6::Gui Qt6::Core)