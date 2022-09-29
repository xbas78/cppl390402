cmake_minimum_required(VERSION 3.23)
project(cppl390402)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(cppl390402 main.cpp mainwindow.h mainwindow.cpp)

target_link_libraries(cppl390402
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )
