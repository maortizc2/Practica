//
// Created by aleja on 20/03/2024.
//

#include "TyreGunner.h"

//constructor de la clase
TyreGunner::TyreGunner(string nombreCompleto) : Trabajador(){}

void TyreGunner ::rol(string) {
    cout<<"TyreGunner"<<endl;
}
int TyreGunner ::cantidadMiembros() {
    return 4;
}
void aflojarLlanta();
void removerLlantas();

