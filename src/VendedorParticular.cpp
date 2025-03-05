#ifndef VENDEDORPARTICULAR_HPP
#define VENDEDORPARTICULAR_HPP

#include "Empleado.hpp"

class VendedorParticular : public Empleado 
{
public:
    VendedorParticular(string nombre, float salario);
    
    void trabajar() const override;
    void mostrarDatos() const override;
    void recibirMensaje(const std::string& mensaje) const override;
};

#endif
