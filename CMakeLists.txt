cmake_minimum_required(VERSION 3.17)
project(domino C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(model)
include_directories(components)
include_directories(controller)
include_directories(view)

add_executable(domino
        view/gameView.h
        view/gameView.c
        controller/gameController.c
        controller/gameController.h
        main.c model/gameModel.c model/gameModel.h)
