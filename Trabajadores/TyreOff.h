//
// Created by aleja on 20/03/2024.
//

#ifndef PRACTICA_TYREOFF_H
#define PRACTICA_TYREOFF_H

#include "../Trabajador.h"
#include "../Trabajadores.h"

class TyreOff: public Trabajador, public Trabajadores{
    public:
        TyreOff(string nombreCompleto,string rol, int cantidadMiembros); //constructor

        void rol(string)override;
        int cantidadMiembros()override;
        void esperarAfloje();
        void removerLlantas();
    };


#endif //PRACTICA_TYREOFF_H
