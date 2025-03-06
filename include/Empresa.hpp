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

    void crearSucursal(string nombre);
    void agregarSucursal(Sucursal* sucursal);
    void mostrarSucursales() ;
    void enviarMensaje(Empleado* empleado, string mensaje) ;
    Sucursal* getSucursal(int i) ;
};

#endif
