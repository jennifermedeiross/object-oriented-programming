#include "Pessoa.h"

int main() {
  Pessoa pessoa1("Jennifer", 19, 1.66);
  pessoa1.Print();

  cout << endl << "Usando métodos em cascata: " << endl << endl;

  pessoa1.setNome("Arley").setIdade(18).setAltura(1.75).Print();
}