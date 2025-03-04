#include "VendedorParticular.hpp"

VendedorParticular::VendedorParticular(string nombre, float salario) : Empleado(nombre, salario) {}

void VendedorParticular::trabajar() const {
    cout << "Vendedor Particular trabajando: " << nombre << endl;
}

void VendedorParticular::mostrarDatos() const {
    Empleado::mostrarDatos();
    cout << "Categoría: Vendedor Particular" << endl;
}
void VendedorParticular::recibirMensaje(const std::string& mensaje) const {
    std::cout << nombre << " ha recibido el mensaje: " << mensaje << std::endl;
}