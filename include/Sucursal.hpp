#ifndef SUCURSAL_HPP
#define SUCURSAL_HPP

#include "Empleado.hpp"

class Sucursal 
{
private:
    string nombre;
    Empleado* empleados[10];
    int cantidadEmpleados;

public:
    Sucursal(string nombre);
    ~Sucursal();

    void agregarEmpleado(Empleado* empleado);
    void mostrarEmpleados() ;
    void enviarMensaje( string mensaje) ;
    string getNombre() ;
};

#endif
