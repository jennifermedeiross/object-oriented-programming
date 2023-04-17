#include <iostream>
#include <string>
using namespace std;

int main() {
  string frase;

  cout << "Digite uma frase: \n";
  getline (cin, frase);

  cout << "Sua frase foi: \n" << frase << endl;
}