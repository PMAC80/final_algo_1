#include "../include/VendedorProfesional.hpp"

VendedorProfesional::VendedorProfesional(string nombre, float salario) : Empleado(nombre, salario) 
{
    cout << "Vendedor Profesional " << nombre << " creado."<< endl;

}

void VendedorProfesional::trabajar() 
{
    cout << nombre << " se encuentra trabajando. " << endl;
}

void VendedorProfesional::mostrarDatos()  
{
    Empleado::mostrarDatos();
    cout << "Categoria: Vendedor Profesional" << endl;
}

void VendedorProfesional::recibirMensaje(string mensaje)  
{
    cout << nombre << " ha recibido el mensaje: " << mensaje << endl;
}