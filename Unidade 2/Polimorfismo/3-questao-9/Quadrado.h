#ifndef QUADRADO_H
#define QUADRADO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Quadrado : public FormaBidimensional
{
private:  
  double lado;
public:
  Quadrado(double l) : FormaBidimensional(4), lado(l) {}

  virtual void desenhar() {
    cout << "-----" << endl;
    cout << "|   |" << endl;
    cout << "-----" << endl;
  }

  virtual void calculaArea(){
    cout << "Área do Quadrado: " << (lado*lado) << endl;
  }

  virtual void calculaPerimetro(){
    cout << "Perímetro do Quadrado: " << (4*lado) << endl;
  }
};

#endif