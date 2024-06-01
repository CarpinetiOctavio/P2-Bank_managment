//
// Created by Octavio Carpineti on 01/06/2024.
//

#ifndef CODIGO_CLIENTE_H
#define CODIGO_CLIENTE_H
#include "Persona.h"
#include "iostream"

class Cliente : public Persona {
private:
    std::string tipoCliente;
    int anioDeIngreso;
    std::string estado;

public:
    // Setters respectivos
    void setTipoCliente (std::string _tipoCliente);
    void setAnioDeIngreso (int _anioDeIngreso);
    void setEstado (std::string _estado);

    // Getters respectivos
    std::string getTipoCliente();
    int getAnioDeIngreso();
    std::string getEstado ();

    Cliente();
    //Cliente(int _dni, std::string _nombre, std::string _tipoCliente, int _anioDeIngreso, std::string _estado);
};


#endif //CODIGO_CLIENTE_H

