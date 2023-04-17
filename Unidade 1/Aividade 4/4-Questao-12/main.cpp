#include <iostream>

#include "ArrayList.h"
using namespace std;

int main() {
  ArrayList al(6);

  al.add(1).add(2).add(10).add(20).add(3).add(5);
  al.print();

  somaArray(al, 5);
  subArray(al, 1);
  divArray(al, 2);
  multArray(al, 10);
  cout << endl;
  al.print();

  return 0;
}