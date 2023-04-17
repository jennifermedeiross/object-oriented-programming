#include <iostream>
#include "Time.h"
using namespace std;

//o uso de métodos inline não alteram a lógica do programa

int main() {
  Time t(16,40);

  t.printUniversal();

  Time t1;
  t1.printUniversal();

  return 0;
}
