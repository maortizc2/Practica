//
// Created by aleja on 20/03/2024.
//

#ifndef PRACTICA_TYREON_H
#define PRACTICA_TYREON_H


#include "../Trabajador.h"
#include "../Trabajadores.h"

class TyreOn: public Trabajador, public Trabajadores{
    public:
        TyreOn(string nombreCompleto,string rol, int cantidadMiembros); //constructor

        void rol(string)override;
        int cantidadMiembros()override;
        void esperarDespeje();
        void bajarLlanta();
    };


#endif //PRACTICA_TYREON_H
