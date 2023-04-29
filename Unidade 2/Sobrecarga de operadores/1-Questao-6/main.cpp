
#include <iostream>

#include "IntegerSet.h"

int main() {
  IntegerSet set1;

  int arr[] = {10,20,50};
  IntegerSet set2(arr,3);

  set1 << 10;
  set2 >> 50;

  cout << "Conjunto 1: " << set1;

  cout << "\nConjunto 2: " << set2;

  cout << "\n---------------------------------------------------------\n";
  cout << "Inserindo o inteiro '2' no conjunto 1 com operador '<<': \n";
  set1 << 2;
  cout << set1;
  cout << "---------------------------------------------------------\n\n";

  cout << "---------------------------------------------------------\n";
  cout << "Deletando o inteiro '2' no conjunto 1 com operador '>>': \n";
  set1 >> 2;
  cout << set1;
  cout << "---------------------------------------------------------\n\n";

  cout << "---------------------------------------------------------\n";
  cout << "União entre os conjuntos com o operador '|': \n";
  cout << (set1 | set2);
  cout << "---------------------------------------------------------\n\n";
  
  cout << "---------------------------------------------------------\n";
  cout << "Interseção entre os conjuntos com o operador '&': \n";
  cout << (set1 & set2);
  cout << "---------------------------------------------------------\n\n";
  

  return 0;
}