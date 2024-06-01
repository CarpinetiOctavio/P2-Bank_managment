//
// CLASE PARA DESARROLLAR IMPLEMENTACION DE LAS FUNCIONES A EMPLEAR, EN VEZ DE HACERLO EN MAIN.CPP
//

#include "Desarrollo.h"
#include "Persona.h"
#include "CajaDeAhorro.h"
#include "Cliente.h"
#include "Personal_Banco.h"

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

// Función para crear menú inicial
void Desarrollo::menuInicial()
{
    int opcion1 = 0;

    do {
        std::cout << "\n\n\t\tBanco UCC - Sistema de Gestión\n\n";
        std::cout << "1. Gestión de usuarios\n";
        std::cout << "2. Gestión de movimientos\n";
        std::cout << "3. Consultas\n";
        std::cout << "4. Informes\n";
        std::cout << "5. Salir del sistema\n";
        std::cout << "Ingrese una opción: ";
        std::cin >> opcion1;

        switch (opcion1) {
            case 1:
                menuUsuario(); // Implementacion para gestiónar clientes y personal
                break;
            case 2:
                ; // Implementar la función para gestión de transacciones
                break;
            case 3:
               ; // Implementar la función para realizar consultas
                break;
            case 4:
               ; // Implementar la función para generar informes
                break;
            case 5:
                std::cout << "\nSaliendo del sistema...\n";
                break;
            default:
                std::cout << "\nOpción no válida. Intente nuevamente.\n";
        }
    } while (opcion1 != 5);
}

void Desarrollo::menuUsuario()
{
    std::vector<Cliente> clientes; // Declarar un vector para almacenar los clientes

    int opcion2 = 0;
    int dni = 0;
    std::string nombre = " ";
    std::string tipoCliente = " ";
    int anioDeIngreso = 0;
    int cantClientes = 0;

    do
    {
        std::cout << "\n\n\t\tGestión de usuarios\n\n";
        std::cout << "1. Ingresar cliente\n";
        std::cout << "2. Modificar estado de cuenta de cliente\n";
        std::cout << "3. Ingresar personal\n";
        std::cout << "4. Volver al menu inicial\n";
        std::cout << "Ingrese una opción: ";
        std::cin >> opcion2;

        switch (opcion2) {
            case 1:
                ingresarCliente(clientes); // Implementacion para ingresar cliente
                break;
            case 2:
                ; // Implementacion para cambiar de estado de cuenta de cliente
                break;
            case 3:
                ; // Implementacion para ingresar personal del banco
                break;
            case 4:
                menuInicial();
                break;
            default:
                std::cout << "\nOpción no válida. Intente nuevamente.\n";
        }
    } while (opcion2 != 4);
}

void Desarrollo::ingresarCliente(std::vector<Cliente>& clientes)
{
    int cantClientes = 0;
    std::cout << "Seleccione la cantidad de clientes a ingresar al sistema : \n";
    std::cin >> cantClientes;

    for (int i = 0; i < cantClientes; i++)
    {
        Cliente cliente;
        int dni = 0;
        std::string nombre = " ";
        std::string tipoCliente = " ";
        int anioDeIngreso = 0;

        std::cout << "Carge los datos respectivos del Cliente " << i + 1 << " a ser ingresado : \n";

        std::cout << "DNI : \n";
        std::cin >> dni;

        std::cout << "Nombre : \n";
        std::cin >> nombre;

        std::cout << "Tipo de cliente : \n";
        std::cin >> tipoCliente;

        std::cout << "Anio de ingreso : \n";
        std::cin >> anioDeIngreso;

        cliente.setDni(dni);
        cliente.setNombre(nombre);
        cliente.setTipoCliente(tipoCliente);
        cliente.setAnioDeIngreso(anioDeIngreso);

        clientes.push_back(cliente); // Agregar el cliente al final del vector
    }
}
