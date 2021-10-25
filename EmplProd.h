//Fichero "EmplProd.h"

#ifndef EMPLPROD_H
#define EMPLPROD_H 1

#include "Asal.h"

class EmplProd: public Asal{
      //Atributos de instancia
      private:
        string turno;
      public:
        //Constructor
        EmplProd (string, long, double, string);
        //Métodos de instancia:
        string getTurno ();
        void setTurno (string);
        double getSalario ();
};

#endif
