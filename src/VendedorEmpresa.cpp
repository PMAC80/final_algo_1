#include "VendedorEmpresa.hpp"

VendedorEmpresa::VendedorEmpresa(string nombre, float salario) : Empleado(nombre, salario) {}


void VendedorEmpresa::trabajar() const 
{
    cout << "Vendedor Empresa " << nombre << " esta trabajando." << endl;
}

void VendedorEmpresa::mostrarDatos() const 
{
    Empleado::mostrarDatos();
    cout << "Categoría: Vendedor Empresa" << endl;
}
void VendedorEmpresa::recibirMensaje(const std::string& mensaje) const 
{
    cout << nombre << " ha recibido el mensaje: " << mensaje << std::endl;
}
