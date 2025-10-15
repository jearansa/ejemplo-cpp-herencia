//Fichero "Asal.h"

#ifndef ASAL_H
#define ASAL_H 1

#include <string>

using namespace std;

class Asal{
  //Atributos de instancia
  private:
           string nombre;
           long dni;
           double salarioBase;
  public:
           //Constructor; atenci�n, no hay constructor sin par�metros
           Asal (string, long, double);
           //M�todos de instancia:
           string getNombre ();
           void setNombre (string);
           long getDni ();
           void setDni (long);
           double getSalario ();
};

#endif