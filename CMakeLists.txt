cmake_minimum_required(VERSION 3.17)
project(domino C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(components)
include_directories(controller)
include_directories(view)

add_executable(domino
        components/Piece.h
        controller/gameController.c
        controller/gameController.h
        view/action_menu.c
        view/action_menu.h
        view/display.c
        view/display.h
        view/main_menu.c
        view/main_menu.h
        main.c model/gameModel.h)
