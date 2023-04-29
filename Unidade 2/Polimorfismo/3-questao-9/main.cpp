#include <iostream>

#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"

int main() {
  FormaBidimensional *formas[3] = {new Circulo(2.1), new Quadrado(30), new Triangulo(2,5)};

  for(int i = 0; i < 3; i++){
    formas[i]->desenhar();
    formas[i]->calculaArea();
    formas[i]->calculaPerimetro();
    cout << "\n--------------------------\n\n";
    delete formas[i];
  }
  
	return 0;
}