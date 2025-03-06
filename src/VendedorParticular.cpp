#include "../include/VendedorParticular.hpp"

VendedorParticular::VendedorParticular(string nombre, float salario) : Empleado(nombre, salario) 
{
    cout << "Vendedor Particular " << nombre << " creado."<< endl;

}

void VendedorParticular::trabajar()  
{
    cout <<  nombre <<" se encuentra trabajando." << endl;
}

void VendedorParticular::mostrarDatos()  
{
    Empleado::mostrarDatos();
    cout << "Categoria: Vendedor Particular" << endl;
}
void VendedorParticular::recibirMensaje( string mensaje)  
{
    cout << nombre << " ha recibido el mensaje: " << mensaje << endl;
}