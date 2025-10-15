
#include <cstdlib>
#include <iostream>

#include "Asal.h"
#include "EmplProd.h"
#include "EmplDistr.h"

using namespace std;

int main ( ) {

 Asal emplead1 ("Manuel Cortina", 12345678, 1200);
 EmplProd * emplead2 = new EmplProd ("Juan Mota", 55333222, 1200, "noche");
 EmplDistr * emplead3 = new EmplDistr ("Antonio Camino", 55333666, 1200, "Granada");

 // 1. Los objetos declarados de las clases derivadas pueden usar tanto los m�todos
 // de su clase Base como los de su propia clase;

 // 2. La interfaz de cada objeto o puntero viene dada por la clase
 // de la que el mismo ha sido declarado, no construido.

 // 3. Tambi�n es importante que compruebes que cada objeto ha llamado
 // a la versi�n del m�todo "getSalario(): double" de
 // la clase de la que ha sido declarado, no construido
 // (disponemos por defecto de enlazado est�tico)

 cout << "El nombre del emplead1 es "   << emplead1.getNombre( )     << endl;
 cout << "Su salario es "               << emplead1.getSalario( )    << endl;
 cout << "El nombre del emplead2 es "   << emplead2->getNombre( )    << endl;
 cout << "El turno del emplead2 es "    << emplead2->getTurno( )     << endl;
 cout << "Su salario es "               << emplead2->getSalario( )   << endl;
 cout << "El nombre del emplead3 es "   << emplead3->getNombre( )    << endl;
 cout << "La region del emplead3 es "   << emplead3->getRegion( )    << endl;
 cout << "Su salario es "               << emplead3->getSalario( )   << endl;

 Asal * emplead4 = new EmplDistr ("Antonio Camino", 55333666, 1200, "Granada");
 // 4. La siguiente operaci�n da un problema de tipos, getRegion () no puede
 // ser invocado desde el puntero "emplead4"
 // cout << "La region del emplead4 es " << emplead4->getRegion() << endl;

 // Sin embargo, si hacemos una operaci�n de "downcast" del puntero,
 // la invocaci�n es posible:
 cout << "La region del emplead4 es " << ((EmplDistr *) (emplead4))->getRegion( ) << endl;

 // 5. Gracias a esta operaci�n de "downcast" podemos obtener una falsa sensaci�n
 // de polimorfismo, como se observa en el siguiente ejemplo;
 // Aqu� no hay enlazado din�mico, aunque el segundo caso llame a la
 // definici�n de "getSalario( ): double" de la clase "EmplDistr"
 cout << "El salario del emplead4 como Asal es " << emplead4->getSalario( ) << endl;
 cout << "El salario del emplead4 como EmplDistr es " << ((EmplDistr *) (emplead4))->getSalario( ) << endl;


 system ("PAUSE");
 return 0;
}
