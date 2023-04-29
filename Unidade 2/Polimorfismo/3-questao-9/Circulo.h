#ifndef CIRCULO_H
#define CIRCULO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Circulo : public FormaBidimensional
{
private:
  double raio;
public:
  Circulo(double r) : FormaBidimensional(99999), raio(r) {}

  virtual void desenhar() {
    cout << "  _ " << endl;
    cout << "/   \\" << endl;
    cout << "\\   /" << endl;
    cout << "  ~ " << endl;
  }

  virtual void calculaArea(){
    cout << "Área do Círculo: " << (3.14*raio*raio) << endl;
  }

  virtual void calculaPerimetro(){
    cout << "Perímetro do Círculo: " << (2*3.14*raio) << endl;
  }
};

#endif