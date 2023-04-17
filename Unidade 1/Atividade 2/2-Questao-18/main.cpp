#include "Empregado.h"

int main() {
  Empregado empregado1("Jennifer", "Medeiros", 18000);
  empregado1.DisplayMessage();

  Empregado empregado2("João", "E O Pé de Feijão", 10000);
  empregado2.DisplayMessage();

  cout << endl << "Após o aumento de 10%: " << endl << endl;

  empregado1.setSalario(empregado1.getSalario() * 1.1);
  empregado2.setSalario(empregado2.getSalario() * 1.1);

  empregado1.DisplayMessage();
  empregado2.DisplayMessage();
}