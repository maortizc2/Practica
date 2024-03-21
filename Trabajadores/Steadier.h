//
// Created by aleja on 20/03/2024.
//

#ifndef PRACTICA_STEADIER_H
#define PRACTICA_STEADIER_H


#include "../Trabajador.h"
#include "../Trabajadores.h"

class Steadier: public Trabajador, public Trabajadores{
private:
string nombreCompleto;
public:
Steadier(string nombreCompleto,string rol,int cantidadMiembros); //constructor

void rol(string)override;
int cantidadMiembros()override;
void estabilizarCoche();
void mantenerEstabilidad();
};

#endif //PRACTICA_STEADIER_H
