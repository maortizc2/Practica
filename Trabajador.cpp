//
// Created by aleja on 20/03/2024.
//

# include "Trabajador.h"

//constructor de la clase
 Trabajador::Trabajador(string nombre,string apellido, int numId) {
    this->nombre= nombre;
    this->apellido= apellido;
    this->numId=numId;
}


//setter and getter
string Trabajador::getNombre(){
    return nombre;
}
void Trabajador::setNombre(string Nombre){
 this->nombre=nombre;
}
string Trabajador::getApellido() {
    return apellido;
}
void Trabajador::setApellido(string apellido) {
    this->apellido=apellido;
}
int Trabajador::getNumId(){
    return numId;
}
void Trabajador::setNumId(int numId) {
    this->numId=numId;
}