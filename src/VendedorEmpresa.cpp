#include "../include/VendedorEmpresa.hpp"

VendedorEmpresa::VendedorEmpresa(string nombre, float salario) : Empleado(nombre, salario) 
{
    cout << "Vendedor Empresa " << nombre << " creado."<< endl;

}


void VendedorEmpresa::trabajar()  
{
    cout <<  nombre << " se encuentra trabajando." << endl;
}

void VendedorEmpresa::mostrarDatos()  
{
    Empleado::mostrarDatos();
    cout << "Categoria: Vendedor Empresa" << endl;
}
void VendedorEmpresa::recibirMensaje( string mensaje)  
{
    cout << nombre << " ha recibido el mensaje: " << mensaje << std::endl;
}