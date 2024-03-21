//
// Created by aleja on 20/03/2024.
//

#ifndef PRACTICA_TRABAJADOR_H
#define PRACTICA_TRABAJADOR_H

#include <iostream>
using namespace std;

class Trabajador {

private: //encapsulamiento
    string nombreCompleto;
public:
    Trabajador(string nombreCompleto);

    Trabajador();
//constructor

    //Setter and getter
    string getNombreCompleto();
    void setNombreCompleto(string);
};


#endif //PRACTICA_TRABAJADOR_H
