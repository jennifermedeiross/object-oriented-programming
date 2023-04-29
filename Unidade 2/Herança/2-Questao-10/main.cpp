#include "Funcionario.h"

int main() {
  Funcionario funcionaria("Jennifer", "111.222.333-44", 123456789, 5000, 80, 300);
  cout << funcionaria;

  funcionaria.setNome("Maria");
  funcionaria.setHorasTrabalhadas(80);
  cout << funcionaria;
}