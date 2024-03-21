//
// Created by aleja on 20/03/2024.
//

#ifndef PRACTICA_TRABAJADOR_H
#define PRACTICA_TRABAJADOR_H

#include <iostream>
using namespace std;

class Trabajador {

private: //encapsulamiento
    string nombre,apellido;
    int numId;

public:
    //constructor
    Trabajador(string nombre,string apellido,int nomId);

    //Setter and getter
    string getNombre();
    void setNombre(string nombre);
    string getApellido();
    void setApellido(string apellido);
    int getNumId();
    void setNumId(int numId);

};


#endif //PRACTICA_TRABAJADOR_H
