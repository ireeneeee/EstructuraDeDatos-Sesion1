#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <iostream>
using namespace std;
class Persona {
    public: 
        Persona(int edad);
        ~Persona();
        int getEdad();
        bool esMujer();
        void setEdad(int nuevaEdad);
        void mostrar();
    
    private:
        bool genero; // T si es mujer, F si es hombre
        int edad;
        char DNI[10];
};

#endif //PERSONA_HPP
