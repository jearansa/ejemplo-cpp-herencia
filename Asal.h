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
           //Constructor; atención, no hay constructor sin parámetros
           Asal (string, long, double);
           //Métodos de instancia:
           string getNombre ();
           void setNombre (string);
           long getDni ();
           void setDni (long);
           double getSalario ();
};

#endif