#include "./include/Empleado.hpp" 
#include "./include/Empresa.hpp"
#include "./include/Sucursal.hpp"
#include "./include/VendedorParticular.hpp"
#include "./include/VendedorProfesional.hpp"
#include "./include/VendedorEmpresa.hpp"

void clearConsole();
void pauseConsole();

int main() {

    clearConsole();

    Empresa* empresa = new Empresa("Mi Empresa");
    
    empresa->crearSucursal("Mar de Plata");
    empresa->crearSucursal("Tandil");

    VendedorParticular* vendedor1 = new VendedorParticular("Miguel", 1800);
    VendedorProfesional* vendedor2 = new VendedorProfesional("Eulogio", 2500);
    VendedorEmpresa* vendedor3 = new VendedorEmpresa("Eduardo", 2800);

    cout << "-----------------------------------------"<< endl;
    empresa->getSucursal(0)->agregarEmpleado(vendedor1);
    empresa->getSucursal(0)->agregarEmpleado(vendedor2);
    empresa->getSucursal(1)->agregarEmpleado(vendedor3);
    
    cout << "-----------------------------------------"<< endl;
    empresa->mostrarSucursales();
    cout << "-----------------------------------------"<< endl;
    empresa->getSucursal(0)->mostrarEmpleados();
    empresa->getSucursal(1)->mostrarEmpleados();
    cout << "-----------------------------------------"<< endl;
    empresa->enviarMensaje(vendedor1, "Bienvenidos a mi empresa");
    empresa->enviarMensaje(vendedor2, "Bienvenidos a mi empresa");
    empresa->enviarMensaje(vendedor3, "Bienvenidos a mi empresa");
    cout << "-----------------------------------------"<< endl;

    delete empresa;
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
