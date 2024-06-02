//
// Created by Octavio Carpineti on 01/06/2024.
//

#ifndef CODIGO_PERSONA_H
#define CODIGO_PERSONA_H
#include "iostream"

class Persona {
protected:
    int dni;
    std::string nombre;

public:
    // Setters respectivos
    void setDni (int _dni);
    void setNombre (std::string _nombre);

    // Getters respectivos
    std::string getNombre ();
    int getDni();

    // Constructor parametrizado
    Persona(int dni, std::string nombre);

    Persona();
};


#endif //CODIGO_PERSONA_H

