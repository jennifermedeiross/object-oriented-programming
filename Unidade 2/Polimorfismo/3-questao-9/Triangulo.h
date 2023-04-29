#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Triangulo : public FormaBidimensional
{
private:  
  double base, altura;
public:
  Triangulo(double b, double a) : FormaBidimensional(3), base(b), altura(a) {}

  virtual void desenhar() {
    cout << "  .   " << endl;
    cout << " / \\ " << endl;
    cout << "/   \\" << endl;
    cout << "~~~~~ " << endl;
  }

  virtual void calculaArea(){
    cout << "Área do Triângulo equilátero: " << (base*altura/2) << endl;
  }

  virtual void calculaPerimetro(){
    cout << "Perímetro do Triângulo equilátero: " << (3*base) << endl;
  }
};

#endif