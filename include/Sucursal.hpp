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
    void mostrarEmpleados() const;
    void enviarMensaje(const std::string& mensaje) const;
    string getNombre() const;
};

#endif
