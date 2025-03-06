#ifndef VENDEDORPROFESIONAL_HPP
#define VENDEDORPROFESIONAL_HPP

#include "Empleado.hpp"

class VendedorProfesional : public Empleado 
{
public:
    VendedorProfesional(string nombre, float salario);
    
    void trabajar()  override;
    void mostrarDatos()  override;
    void recibirMensaje(string mensaje)  override;

};

#endif
