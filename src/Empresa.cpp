#include <iostream>
#include "Empresa.hpp"

using namespace std;

Empresa::Empresa(string nombre) : nombre(nombre), cantidadSucursales(0) 
{
    cout << "Empresa " << nombre << " creada." << endl;
}

Empresa::~Empresa() 
{
    for (int i = 0; i < cantidadSucursales; i++)
    {
        delete sucursales[i];
        cout << "Sucursal " << i << " destruida." << endl;
    }
    
}


void Empresa::agregarSucursal(Sucursal* sucursal) {
    if (cantidadSucursales < 10) {
        sucursales[cantidadSucursales++] = sucursal;
    } else {
        cout << "No se pueden agregar más sucursales a la empresa " << nombre << "." << endl;
    }
}

void Empresa::mostrarSucursales() const {
    cout << "Empresa: " << nombre << endl;
    for (int i = 0; i < cantidadSucursales; ++i) {
        sucursales[i]->mostrarEmpleados();
    }
}

void Empresa::enviarMensaje(Empleado* empleado, const std::string& mensaje) const {
    if (empleado != nullptr) {
        empleado->recibirMensaje(mensaje);  
    }
}
