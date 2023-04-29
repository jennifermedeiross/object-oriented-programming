#ifndef GATO_H
#define GATO_H

#include "Animal.h"

class Gato : public Animal{
  public:
    Gato(string);
    Gato();
    string mia();
   string late(){}
};

#endif