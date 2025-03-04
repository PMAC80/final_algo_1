#include "VendedorProfesional.hpp"

VendedorProfesional::VendedorProfesional(string nombre, float salario) : Empleado(nombre, salario) {}

void VendedorProfesional::trabajar() const {
    cout << "Vendedor Profesional trabajando: " << nombre << endl;
}

void VendedorProfesional::mostrarDatos() const {
    Empleado::mostrarDatos();
    cout << "Categoría: Vendedor Profesional" << endl;
}

void VendedorProfesional::recibirMensaje(const std::string& mensaje) const {
    std::cout << nombre << " ha recibido el mensaje: " << mensaje << std::endl;
}