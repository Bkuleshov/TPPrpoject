cmake_minimum_required(VERSION 3.10)
project(tp)
set(CMAKE_CXX_STANDARD 14)

add_executable(tp
    Game.h
    Player.h
    Queries.h
    UnitFactory.h
    Units/Unit.h
    Units/Worker.h
    Units/Fighter.h
    Units/CheapFighter.h
    Units/CheapWorker.h
    Units/ExpensiveFighter.h
    Units/ExpensiveWorker.h
    Commands/Command.h
    main.cpp
    Game.cpp
    Player.cpp
    Observer.cpp
    Queries.cpp
    Commands/AttackUnit.cpp
    Commands/Work.cpp
    Commands/BuyUnit.cpp
)
