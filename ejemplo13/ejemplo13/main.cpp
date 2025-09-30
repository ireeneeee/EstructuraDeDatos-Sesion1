#include <iostream>
#include "Persona.hpp"

int main(int argc, char **argv)
{
    Persona *p1= new Persona (18);
	p1 -> mostrar();
    
    cout << "Es mujer?: " << (p1->esMujer() ? "T" : "F") << endl;

    p1->setEdad(25);   // cambiamos la edad
    cout << "Despues de cambiar la edad:" << endl;
    p1->mostrar();
    
	return 0;
}
