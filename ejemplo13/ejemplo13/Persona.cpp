#include "Persona.hpp"
Persona :: Persona (int e){
    //El dni y el genero se establece de forma auto
    this -> edad = e;
}
int Persona :: getEdad(){
    return this -> edad;
}
bool Persona :: esMujer() {
    return this -> genero;
}
void Persona :: setEdad (int nuevaEdad){
    this -> edad = nuevaEdad;
}
void Persona :: mostrar() {
    cout << "Tiene " << getEdad() << endl;
}
Persona :: ~Persona()
{
    
}