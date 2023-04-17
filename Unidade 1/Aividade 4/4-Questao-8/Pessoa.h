#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
  public:
    Pessoa(string nome, int idade, double altura);

    Pessoa &setNome(string nome);
    Pessoa &setIdade(int idade);
    Pessoa &setAltura(double altura);
    
    string &getNome(){return this->nome;}
    int &getIdade(){return this->idade;}
    double &getAltura(){return this->altura;}

    void Print()const;

  private:
    string nome;
    int idade;
    double altura;
};

#endif