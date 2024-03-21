//
// Created by aleja on 20/03/2024.
//

#ifndef PRACTICA_REARJACK_H
#define PRACTICA_REARJACK_H


#include "../Trabajador.h"
#include "../Trabajadores.h"

class RearJack: public Trabajador, public Trabajadores{
    private:
        string nombreCompleto;
    public:
       RearJack(string nombreCompleto,string rol,int cantidadMiembros); //constructor

        void rol(string)override;
        int cantidadMiembros()override;
        void subirCarro();
        void bajarCarro();
    };

#endif //PRACTICA_REARJACK_H
