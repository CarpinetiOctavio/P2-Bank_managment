//
// Created by Octavio Carpineti on 01/06/2024.
//

#include "Cliente.h"

void Cliente::setTipoCliente(std::string _tipoCliente)
{
    tipoCliente = _tipoCliente;
}

std::string Cliente::getTipoCliente()
{
    return tipoCliente;
}

//Cliente::Cliente(int _dni, std::string _nombre, std::string _tipoCliente, int _anioDeIngreso, std::string _estado) : Persona(_dni, _nombre), tipoCliente(_tipoCliente), anioDeIngreso(_anioDeIngreso), estado(_estado) {}