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

    virtual void trabajar() const = 0; 
    virtual void mostrarDatos() const;
    float getSalario() const;
    virtual void recibirMensaje(const string& mensaje) const = 0;
    string getNombre() const;
};

#endif
