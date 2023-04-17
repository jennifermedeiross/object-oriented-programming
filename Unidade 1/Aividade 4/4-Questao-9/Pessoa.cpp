#include "Pessoa.h"
#include <string>
using namespace std;

Pessoa::Pessoa(string nome, int idade, double altura) : nome(nome), idade(idade), altura(altura){}

Pessoa &Pessoa::setNome(string nome){
  this->nome = nome;
  return *this;
}
Pessoa &Pessoa::setIdade(int idade){
  this->idade = idade;
  return *this;
}
Pessoa &Pessoa::setAltura(double altura){
  this->altura = altura;
  return *this;
}

void Pessoa::Print() const{
  cout << "Nome: " << nome << endl;
  cout << "Idade: " << idade << endl;
  cout << "Altura: " << altura << endl << endl;
}