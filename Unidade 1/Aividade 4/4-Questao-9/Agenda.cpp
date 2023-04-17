#include "Agenda.h"
#include "Pessoa.h"

using namespace std;

void Agenda::armazenaPessoa(string nome, int idade, float altura){
  pessoas[numPessoas].setNome(nome);
  pessoas[numPessoas].setIdade(idade);
  pessoas[numPessoas].setAltura(altura);

  numPessoas++;
}

void Agenda::armazenaPessoa(const Pessoa &p){
  pessoas[numPessoas] = p;

  numPessoas++;
}

int Agenda::buscaPessoa(string nome) const{
  for (int x = 0; x < numPessoas; x++){
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
  for (int i = 0; i < numPessoas; i++){
    pessoas[i].Print();
  }
}

void Agenda::removePessoa(string nome) {
  int index = buscaPessoa(nome);

  if (index == -1)
    return;

  for (int i = index; i < numPessoas-1; i++){
    pessoas[i] = pessoas[i+1];
  }
  numPessoas--;
}
