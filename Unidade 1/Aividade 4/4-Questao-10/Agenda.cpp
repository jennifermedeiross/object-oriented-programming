#include "Agenda.h"
#include "Pessoa.h"

using namespace std;

void Agenda::armazenaPessoa(string nome, int idade, float altura){
  pessoas[qtdPessoas].setNome(nome);
  pessoas[qtdPessoas].setIdade(idade);
  pessoas[qtdPessoas].setAltura(altura);

  qtdPessoas++;
}

void Agenda::armazenaPessoa(const Pessoa &p){
  pessoas[qtdPessoas] = p;

  qtdPessoas++;
}

int Agenda::buscaPessoa(string nome) const{
  for (int x = 0; x < qtdPessoas; x++){
    if( pessoas[x].getNome() == nome ){
      return x;
    }
  }
  return -1;
}

void Agenda::imprimePessoa(int i) const{
  pessoas[i].Print();
}

void Agenda::imprimePovo() const {
  for (int i = 0; i < qtdPessoas; i++){
    pessoas[i].Print();
  }
}

void Agenda::removePessoa(string nome) {
  int index = buscaPessoa(nome);

  if (index == -1)
    return;

  for (int i = index; i < qtdPessoas-1; i++){
    pessoas[i] = pessoas[i+1];
  }
  qtdPessoas--;
}
