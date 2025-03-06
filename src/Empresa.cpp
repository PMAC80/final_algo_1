#include <iostream>
#include "../include/Empresa.hpp"

using namespace std;

Empresa::Empresa(string nombre) : nombre(nombre), cantidadSucursales(0) 
{
    cout  << nombre << " fue creada." << endl;
    cout << "-----------------------------------------" << endl;}

Empresa::~Empresa() 
{
    for (int i = 0; i < cantidadSucursales; i++)
    {
        cout << "Sucursal " << sucursales[i]->getNombre() << " destruida." << endl;
        delete sucursales[i];
    }
    
}

void Empresa::crearSucursal(string nombre)
{
    Sucursal* sucursal = new Sucursal (nombre); 
    agregarSucursal(sucursal);
    cout << "-----------------------------------------" << endl;
      
}
void Empresa::agregarSucursal(Sucursal* sucursal) 
{
    if (cantidadSucursales < 10) 
    {
        sucursales[cantidadSucursales++] = sucursal;

        cout << "La sucursal " << sucursal->getNombre() << " ha sido creada y agregada a tu empresa "<< endl;
    } 
    else 
    {
        cout << "No se pueden agregar más sucursales a la empresa " << nombre << "." << endl;
    }
}

void Empresa::mostrarSucursales()  
{
    cout << "Las sucursales de " << nombre << " son : "<< endl;
    for (int i = 0; i < cantidadSucursales; ++i) 
    {
        cout << i+1 << " - "<< sucursales[i]->getNombre();
        cout << endl;
    }
}

void Empresa::enviarMensaje(Empleado* empleado, string mensaje)  
{
    if (empleado != nullptr) 
    {
        empleado->recibirMensaje(mensaje);  
    }
    else 
    {
        cout << "El empleado no existe." << endl;
    }
}

Sucursal* Empresa::getSucursal(int i) {
    return sucursales[i]; 
}
