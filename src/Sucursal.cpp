#include "../include/Sucursal.hpp"


Sucursal::Sucursal(string nombre) : nombre(nombre), cantidadEmpleados(0) 
{}
Sucursal::~Sucursal() {}

void Sucursal::agregarEmpleado(Empleado* empleado) 
{
    if (cantidadEmpleados < 10) 
    {
        empleados[cantidadEmpleados++] = empleado; 
        cout << empleado->getNombre() << " ha sido agregado a la sucursal " << nombre << "." << endl;       
    } 
    else 
    {
        cout << "No se pueden agregar más empleados a la sucursal " << nombre << "." << endl;
    }
}

void Sucursal::mostrarEmpleados()  
{
    cout << "Sucursal: " << nombre << endl;
    cout << "--------------------- " << endl;
    for (int i = 0; i < cantidadEmpleados; ++i) 
    {
        empleados[i]->mostrarDatos();
        empleados[i]->trabajar();
    }
}

string Sucursal:: getNombre() 
{
    return nombre;
}