//
// Created by aleja on 20/03/2024.
//

#ifndef PRACTICA_TYREGUNNER_H
#define PRACTICA_TYREGUNNER_H

#include "../Trabajador.h"
#include "../Trabajadores.h"


class TyreGunner:public Trabajador,public Trabajadores{
private:
    TyreGunner(string nombreCompleto);
    string nommbreCompleto;
public:
    TyreGunner(string nombreCompleto,string rol,int cantidadMiembros); //constructor


    void rol(string)override;
    int cantidadMiembros()override;
    void aflojarLlanta();
    void removerLlantas();
};


#endif //PRACTICA_TYREGUNNER_H
