cmake_minimum_required(VERSION 3.27)
project(Practica)

set(CMAKE_CXX_STANDARD 17)

add_executable(Practica main.cpp
        Trabajadores/TyreGunner.cpp
        Trabajadores/TyreGunner.h
        Trabajadores/TyreOff.cpp
        Trabajadores/TyreOff.h
        Trabajadores/TyreOn.cpp
        Trabajadores/TyreOn.h
        Trabajadores/FrontJack.cpp
        Trabajadores/FrontJack.h
        Trabajadores/RearJack.cpp
        Trabajadores/RearJack.h
        Trabajadores/Steadier.cpp
        Trabajadores/Steadier.h
        Trabajadores/FlapAdjust.cpp
        Trabajadores/FlapAdjust.h
        Trabajadores/Lollipop.cpp
        Trabajadores/Lollipop.h
        Equipos/F1Team.cpp
        Equipos/F1Team.h
        Equipos/PitCrewTeam.cpp
        Equipos/PitCrewTeam.h
        Equipos/TeamDriverA.cpp
        Equipos/TeamDriverA.h
        Equipos/TeamDriverB.cpp
        Equipos/TeamDriverB.h
        Trabajador.cpp
        Trabajador.h
        Trabajadores.cpp
        Trabajadores.h)
