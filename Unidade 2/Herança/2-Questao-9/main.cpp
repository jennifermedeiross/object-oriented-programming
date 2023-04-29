#include "Pessoa.h"
#include "PessoaFisica.h"
#include "Cliente.h"

int main() {
  Cliente cliente("Jennifer", "111.222.333-44", "(87) 99999-0000", "Paraíba");

  cout << cliente;

  cliente.setNome("Maria");
  cout << cliente << endl;

  cliente.setCpf("xxx.yyy.zzz-ww");
  cout << cliente << endl;
}