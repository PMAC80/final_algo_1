#ifndef VENDEDOREMPRESA_HPP
#define VENDEDOREMPRESA_HPP

#include "Empleado.hpp"

class VendedorEmpresa : public Empleado 
{
public:
    VendedorEmpresa(string nombre, float salario);
    
    void trabajar()  override;
    void mostrarDatos()  override;
    void recibirMensaje(string mensaje)  override;

};

#endif
