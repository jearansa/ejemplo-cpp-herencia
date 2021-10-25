
// Recuerda los comentarios que hemos hecho
// en el fichero "EmplProd.cpp"

#include "EmplProd.h"

EmplProd::EmplProd(string n, long d, double sb, string t): Asal(n, d, sb){
     this->turno = t;
};

string EmplProd::getTurno (){
     return this->turno;
};

void EmplProd::setTurno (string nt){
     this->turno = nt;
};

double EmplProd::getSalario (){
       return Asal::getSalario() * (1 + 0.15);
};
