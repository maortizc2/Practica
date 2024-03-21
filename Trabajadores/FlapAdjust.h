//
// Created by aleja on 20/03/2024.
//

#ifndef PRACTICA_FLAPADJUST_H
#define PRACTICA_FLAPADJUST_H


#include "../Trabajador.h"
#include "../Trabajadores.h"

class FlapAdjust: public Trabajador, public Trabajadores{
    public:
        FlapAdjust(string nombreCompleto,string rol,int cantidadMiembros); //constructor

        void rol(string)override;
        int cantidadMiembros()override;
        void justarFlap();
        void ponerNuevaAla();
    };

#endif //PRACTICA_FLAPADJUST_H
