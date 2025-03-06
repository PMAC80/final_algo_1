#ifndef VENDEDORPARTICULAR_HPP
#define VENDEDORPARTICULAR_HPP

#include "Empleado.hpp"

class VendedorParticular : public Empleado 
{
public:
    VendedorParticular(string nombre, float salario);
    
    void trabajar()  override;
    void mostrarDatos()  override;
    void recibirMensaje( string mensaje)  override;
};

#endif
