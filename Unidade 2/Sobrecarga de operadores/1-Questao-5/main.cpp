#include <iostream>
using std::cout, std::endl;
using std::cin;

#include "Array.h"

int main() {
  Array a1(7);  //array de 7 elementos
  Array a2;     //array de 10 elementos

  cout << "Entre com 7 elementos: ";
  cin >> a1;    //lendo array 
  
  cout << "Entre com 10 elementos: ";
  cin >> a2;    //lendo array 

  cout << "Array 1: " << a1;   //escrevendo array
  cout << "Array 2: " << a2;   //escrevendo array

  cout << "\n----------------------------------------------\n";
  cout << "Somando os arrays (array3 = array1 + array2): \n";
  cout << "----------------------------------------------\n";
  cout << a1 + a2;
  cout << "----------------------------------------------\n\n";
  
  cout << "----------------------------------------------\n";
  cout << "Somando os arrays (array1 += array2): \n";
  cout << "----------------------------------------------\n";
  cout << (a1 += a2);
  cout << "----------------------------------------------\n\n";
  
  if (a1 == a2)
    cout << "a1 e a2 são iguais";

  Array a3(a1);

  a3[5] = 100; //invoca int &operator[](int)

  cout << "a3[5] == " << a3[5] << endl;  //int operator[](int) const

  a2 = a3;

  cout << "a2[5] == " << a3[5] << endl;

  a2[100] = 50;


  return 0;
}