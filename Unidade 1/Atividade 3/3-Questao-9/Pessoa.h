#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>
using namespace std;

class Pessoa{
  public:
    Pessoa(string n, string c);

    void setNome(string n);
    void setCPF(string c);

    string getNome();
    string getCPF();

    bool ValidaCPF ();

    void apresentar();

  private:
    string nome, cpf;
    bool valido;
};

#endif