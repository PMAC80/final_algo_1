#include "../include/Empleado.hpp"


Empleado::Empleado(string nombre, float salario) : nombre(nombre), salario(salario) 
{}

void Empleado::mostrarDatos()  
{
    cout << "Nombre: " << nombre << endl;
    cout <<"Salario: $ " << salario << endl;
}

float Empleado::getSalario()  
{
    return salario;
}
string Empleado::getNombre()  
{
    return nombre;
}