#include <iostream>
using namespace std;

void sequencia() {
  static int count = 0;
  count++;
  cout << "O contador está em: "<< count << endl;
}

int main() {
  for(int a =  0; a < 10; a ++) sequencia();
  
  return 0;
}