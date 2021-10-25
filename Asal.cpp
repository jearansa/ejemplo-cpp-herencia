//Fichero "Asal.cpp"

#include <string>
#include "Asal.h"

using namespace std;

Asal::Asal(string n, long d, double sb){
   this->nombre = n;
   this->dni = d;
   this->salarioBase = sb;
};

string Asal::getNombre (){
     return this->nombre;
};

void Asal::setNombre (string nn){
     this->nombre = nn;
};

long Asal::getDni (){
     return this->dni;
};

void Asal::setDni (long nd){
     this->dni = nd;
};

double Asal::getSalario (){
       return this->salarioBase;
};
