#include "VendedorProfesional.hpp"

VendedorProfesional::VendedorProfesional(string nombre, float salario) : Empleado(nombre, salario) {}

void VendedorProfesional::trabajar() const
{
    cout << "Vendedor Profesional "<< nombre << " esta trabajando. " << endl;
}

void VendedorProfesional::mostrarDatos() const 
{
    Empleado::mostrarDatos();
    cout << "Categoría: Vendedor Profesional" << endl;
}

void VendedorProfesional::recibirMensaje(const std::string& mensaje) const 
{
    cout << nombre << " ha recibido el mensaje: " << mensaje << std::endl;
}
