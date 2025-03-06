#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <iostream>
#include <string>
using namespace std;

class Empleado 
{
protected:
    string nombre;
    float salario;

public:
    Empleado(string nombre, float salario);
    virtual ~Empleado() = default;

    virtual void trabajar()  = 0; 
    virtual void mostrarDatos() ;
    float getSalario() ;
    virtual void recibirMensaje( string mensaje)  = 0;
    string getNombre() ;
};

#endif
