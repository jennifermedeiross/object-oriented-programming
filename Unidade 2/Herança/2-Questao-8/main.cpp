#include "Pessoa.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

int main() {
  Pessoa pessoa("Jennifer");
  cout << "-- Pessoa --\n" << pessoa << endl << endl;
  
  PessoaFisica pessoaFisica(pessoa.getNome(), "000111222-33");
  cout << pessoaFisica;

  pessoaFisica.setNome("Ana");
  cout << pessoaFisica;

  PessoaJuridica pessoaJuridica(pessoa.getNome(), "11.222.333/0000-44", "DevCoin");
  cout << pessoaJuridica;

  pessoaJuridica.setNome("Maria");
  cout << pessoaJuridica;
}