//
// Created by aleja on 20/03/2024.
//

#ifndef PRACTICA_TRABAJADORES_H
#define PRACTICA_TRABAJADORES_H

#include <iostream>
using namespace std;

class Trabajadores {
public:
    Trabajadores();//constructor

    //metodos
    virtual void rol(string rol);
    virtual int cantidadMiembros();
};


#endif //PRACTICA_TRABAJADORES_H
