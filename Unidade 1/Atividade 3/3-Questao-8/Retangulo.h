#ifndef RETANGULO_H
#define RETANGULO_H

#include <iostream>
using namespace std;

class Retangulo{

  public:
    Retangulo(float a , float l){
      altura = a;
      largura = l;
    };

    // Métodos set
    void setAltura(float a) {altura = (a > 0 && a < 20 ? a : 1);}
    void setLargura(float l) {largura = (l > 0 && l < 20 ? l : 1);}

    // Métodos get
    float getAltura() { return altura; };
    float getLargura() { return largura; };

    // Métodos perimetro e area:
    float Perimetro(){ return (2*altura + 2*largura);}
    float Area(){ return (altura*largura)/2;}
  private:
    float altura, largura;
};


#endif