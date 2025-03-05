#include <iostream>
#include "Empresa.hpp"

using namespace std;

Empresa::Empresa(string nombre) : nombre(nombre), cantidadSucursales(0) 
{
    cout << "-----------------------------------------" << endl;
    cout  << nombre << " fue creada." << endl;
    cout << "-----------------------------------------" << endl;
}

Empresa::~Empresa() 
{
    for (int i = 0; i < cantidadSucursales; i++)
    {
        cout << "Sucursal " << sucursales[i]->getNombre() << " destruida." << endl;
        delete sucursales[i];
    }
    
}


void Empresa::agregarSucursal(Sucursal* sucursal) 
{
    if (cantidadSucursales < 10) 
    {
        sucursales[cantidadSucursales++] = sucursal;
        cout << "La sucursal " << sucursal->getNombre() << " ha sido agregada a tu empresa "<< endl;
    } 
    else 
    {
        cout << "No se pueden agregar más sucursales a la empresa " << nombre << "." << endl;
    }
}

void Empresa::mostrarSucursales() const 
{
    cout << "Empresa: " << nombre << endl;
    for (int i = 0; i < cantidadSucursales; ++i) 
    {
        sucursales[i]->mostrarEmpleados();
        cout << endl;
    }
}

void Empresa::enviarMensaje(Empleado* empleado, const std::string& mensaje) const 
{
    if (empleado != nullptr) 
    {
        empleado->recibirMensaje(mensaje);  
    }
}
