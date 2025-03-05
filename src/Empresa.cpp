#ifndef EMPRESA_HPP
#define EMPRESA_HPP

#include <iostream>
#include <string>
#include "Sucursal.hpp"

using namespace std;

class Empresa 
{
private:
    string nombre;
    Sucursal* sucursales[10];
    int cantidadSucursales;

public:
    Empresa(string nombre);
    ~Empresa();

    void agregarSucursal(Sucursal* sucursal);
    void mostrarSucursales() const;
    void enviarMensaje(Empleado* empleado, const std::string& mensaje) const;
    
};

#endif
