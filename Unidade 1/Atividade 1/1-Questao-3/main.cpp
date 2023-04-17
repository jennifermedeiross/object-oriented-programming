#include <iostream>
#include <string>
using namespace std;

int main() {
  string nome;
  double nota1, nota2, nota3, media;

  cout << "---------------------\n";
  cout << "  Obtenha sua média\n";
  cout << "---------------------\n";

  cout << "Nome: \n";
  getline(cin, nome);

  cout << "\nNota 1: \n";
  cin >> nota1;
  cout << "\nNota 2: \n";
  cin >> nota2;
  cout << "\nNota 3: \n";
  cin >> nota3;

  media = (nota1 + nota2 + nota3)/3;

  cout << "---------------------\n";
  cout << "Sua média foi: " << media << endl;
  cout << "---------------------\n";

  return 0;
}