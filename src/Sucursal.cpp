#include "Sucursal.hpp"


Sucursal::Sucursal(string nombre) : nombre(nombre), cantidadEmpleados(0) {}


Sucursal::~Sucursal() {}


void Sucursal::agregarEmpleado(Empleado* empleado) {
    if (cantidadEmpleados < 10) {
        empleados[cantidadEmpleados++] = empleado;
    } else {
        cout << "No se pueden agregar más empleados a la sucursal " << nombre << "." << endl;
    }
}

void Sucursal::mostrarEmpleados() const {
    cout << "Sucursal: " << nombre << endl;
    for (int i = 0; i < cantidadEmpleados; ++i) {
        empleados[i]->mostrarDatos();
        empleados[i]->trabajar();
    }
}
