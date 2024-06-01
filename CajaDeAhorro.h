//
// Created by Octavio Carpineti on 01/06/2024.
//

#ifndef CODIGO_CAJADEAHORRO_H
#define CODIGO_CAJADEAHORRO_H


class CajaDeAhorro {
private:
    int deposito;
    int extraccion;

public:
    void setDeposito (int _deposito);
    void setExtraccion (int _extraccion);

    int getDeposito ();
    int getExtraccion();

    CajaDeAhorro(int _deposito, int _extraccion);
};


#endif //CODIGO_CAJADEAHORRO_H
