#include "VendedorEmpresa.hpp"

VendedorEmpresa::VendedorEmpresa(string nombre, float salario) : Empleado(nombre, salario) {}


void VendedorEmpresa::trabajar() const {
    cout << "Vendedor Empresa trabajando: " << nombre << endl;
}

void VendedorEmpresa::mostrarDatos() const {
    Empleado::mostrarDatos();
    cout << "Categoría: Vendedor Empresa" << endl;
}
void VendedorEmpresa::recibirMensaje(const std::string& mensaje) const {
    std::cout << nombre << " ha recibido el mensaje: " << mensaje << std::endl;
}