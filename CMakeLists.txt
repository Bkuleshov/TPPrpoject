cmake_minimum_required(VERSION 3.10)
project(tp)
set(CMAKE_CXX_STANDARD 14)

add_executable(tp
    main.cpp
    Game.h
    Game.cpp
    Player.h
    Player.cpp
    Observer.h
    Queries.h
    Queries.cpp
    UnitFactory.h
    Units/Unit.h
    Units/Worker.h
    Units/Fighter.h
    Units/CheapFighter.h
    Units/CheapWorker.h
    Units/ExpensiveFighter.h
    Units/ExpensiveWorker.h
)
