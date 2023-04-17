#include <iostream>
using namespace std;

void swap(int* a, int* b){
  cout << "-----------------------------\n";
  cout << "O valor 1 era: " << *a << endl << "O valor 2 era: " << *b << endl;
  int c = *a;
  *a = *b;
  *b = c;

  cout << "\nO valor 1 agora é: " << *a << endl << "O valor 2 agora é: " << *b << endl << endl;

}

int main() {
  int x = 200, y = 150, z = 98877;
  swap(&x, &y);
  swap(&z, &x);
  swap(&y, &z);
}