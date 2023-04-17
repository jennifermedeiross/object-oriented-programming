#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
  public:
    Pessoa(string nome = "", int idade = 0, double altura = 0);

    Pessoa &setNome(string nome);
    Pessoa &setIdade(int idade);
    Pessoa &setAltura(double altura);
    
    string getNome() const {return this->nome;}
    int getIdade() const {return this->idade;}
    double getAltura() const {return this->altura;}

    void Print()const;

  private:
    string nome;
    int idade;
    double altura;
};

#endif