//
// CLASE PARA DESARROLLAR DECLARACION DE LAS FUNCIONES A EMPLEAR, EN VEZ DE HACERLO EN MAIN.CPP
//

#ifndef CODIGO_DESARROLLO_H
#define CODIGO_DESARROLLO_H
#include "Persona.h"
#include "CajaDeAhorro.h"
#include "Cliente.h"
#include "Personal_Banco.h"
#include "iostream"

class Desarrollo {
public:

    // Menues
    void menuInicial ();
    void menuUsuario();

    //Ingreso de clientes y usuario
    void ingresarCliente(std::vector <Cliente> &clientes );
    void ingresarPersonal();
};

#endif //CODIGO_DESARROLLO_H
