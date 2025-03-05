#include "VendedorParticular.hpp"

VendedorParticular::VendedorParticular(string nombre, float salario) : Empleado(nombre, salario) {}

void VendedorParticular::trabajar() const 
{
    cout << "Vendedor Particular " << nombre <<" esta trabajando." << endl;
}

void VendedorParticular::mostrarDatos() const 
{
    Empleado::mostrarDatos();
    cout << "Categoria: Vendedor Particular" << endl;
}
void VendedorParticular::recibirMensaje(const std::string& mensaje) const 
{
    cout << nombre << " ha recibido el mensaje: " << mensaje << std::endl;
}
