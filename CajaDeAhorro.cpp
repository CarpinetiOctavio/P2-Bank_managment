//
// Created by Octavio Carpineti on 01/06/2024.
//

#include "CajaDeAhorro.h"

void CajaDeAhorro::setDeposito(int _deposito)
{
    deposito = _deposito;
}

int CajaDeAhorro::getDeposito()
{
    return deposito;
}

void CajaDeAhorro::setExtraccion(int _extraccion)
{
    extraccion = _extraccion;
}

int CajaDeAhorro::getExtraccion()
{
    return extraccion;
}

CajaDeAhorro::CajaDeAhorro(int _deposito, int _extraccion) : deposito(_deposito), extraccion(_extraccion) {};
