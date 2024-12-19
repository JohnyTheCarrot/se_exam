cmake_minimum_required(VERSION 3.28)
project(SEAssignment)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME}
        src/engine/GameWinMain.cpp
        src/Game.cpp
        src/engine/GameEngine.cpp
        src/engine/AbstractGame.cpp
)

target_link_libraries(${PROJECT_NAME} winmm gdiplus gdi32 msimg32)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static -static-libgcc -static-libstdc++")

target_include_directories(${PROJECT_NAME} PRIVATE src)
