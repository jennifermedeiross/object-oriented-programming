#include <iostream>
using std::cout, std::endl;

#include "Complex.h"

int main() {
  Complex c1(10,5), c2(5,-5);
  cout << "------------------------------------------\n";
  cout << "Exemplo -> c1(10, 5) e c2(5,-5)\n";
  cout << "------------------------------------------\n";
  cout << "Soma usando operador '+':\n";
  (c1+c2).print();
  cout << "Soma usando operador '+=':\n";
  (c1+=c2).print();
  cout << "------------------------------------------\n";
  
  Complex c3(12,6), c4(4,15);
  cout << "\n\n------------------------------------------\n";
  cout << "Exemplo -> c3(12, 6) e c4(4,15)\n";
  cout << "------------------------------------------\n";
  cout << "Subtração usando operador '-':\n";
  (c3-c4).print();
  cout << "Subtração usando operador '-=':\n";
  (c3-=c4).print();
  cout << "------------------------------------------\n";

  Complex c5(1,3), c6(7,19);
  cout << "\n\n------------------------------------------\n";
  cout << "Exemplo -> c5(1, 3) e c6(7,19)\n";
  cout << "------------------------------------------\n";
  cout << "Pré incrementação à parte real (1º num): \n";
  (c5++).print();
  cout << "Pré decrementação à parte real (1º num): \n";
  (c6--).print();
  cout << "------------------------------------------\n";

  Complex c7(10,30), c8(70,9);
  cout << "\n\n------------------------------------------\n";
  cout << "Exemplo -> c7(10, 30) e c8(70,9)\n";
  cout << "------------------------------------------\n";
  cout << "Pré incrementação à parte real (1º num): \n";
  (++c7).print();
  cout << "Pré decrementação à parte real (1º num): \n";
  (--c8).print();
  cout << "------------------------------------------\n";

  return 0;
}