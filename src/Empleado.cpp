#include "Empleado.hpp"


Empleado::Empleado(string nombre, float salario) : nombre(nombre), salario(salario) {}


void Empleado::mostrarDatos() const {
    cout << "Nombre: " << nombre << ", Salario: " << salario << endl;
}

float Empleado::getSalario() const {
    return salario;
}
