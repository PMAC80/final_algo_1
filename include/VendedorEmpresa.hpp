#ifndef VENDEDOREMPRESA_HPP
#define VENDEDOREMPRESA_HPP

#include "Empleado.hpp"

class VendedorEmpresa : public Empleado {
public:
    VendedorEmpresa(string nombre, float salario);
    void trabajar() const override;
    void mostrarDatos() const override;
    void recibirMensaje(const std::string& mensaje) const override;

};

#endif
