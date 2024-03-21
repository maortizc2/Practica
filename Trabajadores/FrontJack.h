//
// Created by aleja on 20/03/2024.
//

#ifndef PRACTICA_FRONTJACK_H
#define PRACTICA_FRONTJACK_H


#include "../Trabajador.h"
#include "../Trabajadores.h"

class FrontJack : public Trabajador, public Trabajadores{
    public:
        FrontJack(string nombreCompleto,string rol, int cantidadMiembros); //constructor

        void rol(string)override;
        int cantidadMiembros()override;
        void subirCarro();
        void bajarCarro();
    };

#endif //PRACTICA_FRONTJACK_H
