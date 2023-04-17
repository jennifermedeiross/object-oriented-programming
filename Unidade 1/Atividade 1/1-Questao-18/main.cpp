#include <iostream>
using namespace std;

int main() {

  for (int i = 0; i <= 5; i++){
    for (int e = 0 ; e < i; e++){
      cout << "*";
    } cout << endl;
  } cout << endl;

  for (int i = 0; i <= 5; i++){
    for (int e = 0; e < i; e++){
      cout << " ";
    }
    for (int u = 5; u > i ; u--) {
      cout << "*";
    } cout << endl;
  }

  return 0;
}