#include "Empleado.hpp" 
#include "Empresa.hpp"
#include "Sucursal.hpp"
#include "VendedorParticular.hpp"
#include "VendedorProfesional.hpp"
#include "VendedorEmpresa.hpp"

void clearConsole();
void pauseConsole();

int main() {

    clearConsole();

    Empresa empresa("Mi Empresa");

    Sucursal* sucursal1 = new Sucursal("Mar del Plata");
    Sucursal* sucursal2 = new Sucursal("Tandil");

    VendedorParticular* vendedor1 = new VendedorParticular("Pablo", 1800);
    VendedorProfesional* vendedor2 = new VendedorProfesional("Lisandro", 2500);
    VendedorEmpresa* vendedor3 = new VendedorEmpresa("Franco", 2800);

    cout << "-----------------------------------------"<< endl;
    empresa.agregarSucursal(sucursal1);
    empresa.agregarSucursal(sucursal2);
 
    cout << "-----------------------------------------"<< endl;
    sucursal1->agregarEmpleado(vendedor1);
    sucursal1->agregarEmpleado(vendedor2);
    sucursal2->agregarEmpleado(vendedor3);
    
    cout << "-----------------------------------------"<< endl;
    empresa.mostrarSucursales();
    
    cout << "-----------------------------------------"<< endl;
    empresa.enviarMensaje(vendedor1, "Estudia para la materia de Jose");
    empresa.enviarMensaje(vendedor2, "Lava los platos");
    empresa.enviarMensaje(vendedor3, "No dejes todo tirado");
    
    cout << "-----------------------------------------"<< endl;
    delete vendedor1;
    delete vendedor2;
    delete vendedor3;
    
    return 0;
}

void clearConsole() 
{
    #ifdef __unix__
        system("clear");
    #elif __APPLE__
        system("clear");
    #elif defined(_WIN32) || defined(WIN64)
        system("cls");
    #endif
}
void pauseConsole()                                        
{
cout << "Presione Enter para continuar..." << endl;
cin.ignore();                                               
cin.get();                                                  
}  
