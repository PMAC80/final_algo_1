#include "Empleado.hpp" 
#include "Empresa.hpp"
#include "Sucursal.hpp"
#include "VendedorParticular.hpp"
#include "VendedorProfesional.hpp"
#include "VendedorEmpresa.hpp"

int main() {
    Empresa empresa("Empresa");

    Sucursal* sucursal1 = new Sucursal("Sucursal 1");
    Sucursal* sucursal2 = new Sucursal("Sucursal 2");

    VendedorParticular* vendedor1 = new VendedorParticular("Juan", 1000);
    VendedorProfesional* vendedor2 = new VendedorProfesional("Maria", 1500);
    VendedorEmpresa* vendedor3 = new VendedorEmpresa("Carlos", 2000);

    sucursal1->agregarEmpleado(vendedor1);
    sucursal1->agregarEmpleado(vendedor2);
    sucursal2->agregarEmpleado(vendedor3);

    empresa.agregarSucursal(sucursal1);
    empresa.agregarSucursal(sucursal2);

    empresa.mostrarSucursales();

    empresa.enviarMensaje(vendedor1, "Recordatorio 1");
    empresa.enviarMensaje(vendedor2, "Recordatorio 2");
    empresa.enviarMensaje(vendedor3, "Recordatorio 3");

    return 0;
}
