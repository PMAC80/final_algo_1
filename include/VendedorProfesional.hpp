#ifndef VENDEDORPROFESIONAL_HPP
#define VENDEDORPROFESIONAL_HPP

#include "Empleado.hpp"

class VendedorProfesional : public Empleado {
public:
    VendedorProfesional(string nombre, float salario);
    void trabajar() const override;
    void mostrarDatos() const override;
    void recibirMensaje(const std::string& mensaje) const override;

};

#endif
