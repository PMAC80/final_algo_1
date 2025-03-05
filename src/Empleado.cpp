#include "Empleado.hpp"


Empleado::Empleado(string nombre, float salario) : nombre(nombre), salario(salario) 
{
    cout << "Vendedor Particular " << nombre << " creado."<< endl;
}


void Empleado::mostrarDatos() const 
{
    cout << "Nombre: " << nombre << endl;
    cout <<"Salario: $ " << salario << endl;
}

float Empleado::getSalario() const 
{
    return salario;
}
string Empleado::getNombre() const 
{
    return nombre;
}
