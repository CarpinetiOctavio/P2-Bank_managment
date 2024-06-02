cmake_minimum_required(VERSION 3.28)

# Nombre del proyecto
project(Codigo)

# Establecer el estándar de C++
set(CMAKE_CXX_STANDARD 17)

# Agregar el ejecutable
add_executable(Codigo main.cpp
        Persona.h
        Persona.cpp
        Personal_Banco.h
        Personal_Banco.cpp
        Cliente.h
        Cliente.cpp
        CajaDeAhorro.h
        CajaDeAhorro.cpp
        Desarrollo.h
        Desarrollo.cpp
)