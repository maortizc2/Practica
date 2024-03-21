//
// Created by aleja on 20/03/2024.
//

#ifndef PRACTICA_LOLLIPOP_H
#define PRACTICA_LOLLIPOP_H


#include "../Trabajador.h"
#include "../Trabajadores.h"

class Lollipop: public Trabajador, public Trabajadores{
public:
Lollipop(string nombreCompleto,string rol,int cantidadMiembros); //constructor

void rol(string)override;
int cantidadMiembros()override;
void detenerConductor();
void darSeñalSalida();
};

#endif //PRACTICA_LOLLIPOP_H
