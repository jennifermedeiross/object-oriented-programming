#ifndef AGENDA_H
#define AGENDA_H

#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

class Agenda{
  public:
    Agenda(int tPessoas = 1){
      this->tPessoas = tPessoas;
      pessoas = new Pessoa[tPessoas];
      qtdPessoas = 0;
    }
    ~Agenda(){
      delete []pessoas;
    }

    void armazenaPessoa(string nome, int idade, float altura);
    void armazenaPessoa(const Pessoa &p);
  
    void removePessoa(string nome);

    int buscaPessoa(string nome) const;
    void imprimePovo() const; 
    void imprimePessoa(int i) const; 
  private:
   Pessoa *pessoas;
   int tPessoas;
   int qtdPessoas;

};

#endif