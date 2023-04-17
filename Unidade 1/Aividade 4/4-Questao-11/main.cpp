#include <iostream>
#include "ArrayList.h"

using namespace std;

int main() {
  ArrayList al(10);

  al.add(1).add(2).add(10).add(20).add(1).add(10).add(3).add(4).add(5).add(6);

  al.print();

  al.remove(3);
  cout << "\nRemovendo o elemento de index 3:\n";
  al.print();

  al.removeEl(10);
  cout << "\n\nRemovendo todos os elementos de valor 10:\n";
  al.print();  

  return 0;
}