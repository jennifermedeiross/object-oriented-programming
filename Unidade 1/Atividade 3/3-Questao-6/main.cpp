#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

//o uso de métodos inline não alteram a lógica do programa

int main() {
  Time t(11,50,59);
  cout << "Teste com 11h50m59 + 1s\n";
  t.printUniversal();
  t.tick();
  t.printUniversal();

  cout << "\nTeste com 11h59m59 + 1s\n";
  Time t2(11,59,59);
  t2.printUniversal();
  t2.tick();
  t2.printUniversal();

  cout << "\nTeste com 23h59m59 + 1s\n";
  Time t3(23,59,59);
  t3.printUniversal();
  t3.tick();
  t3.printUniversal();

  return 0;
}