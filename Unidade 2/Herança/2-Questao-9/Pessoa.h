#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <iostream>
using namespace std;

class Pessoa{
  friend ostream &operator<<(ostream &out, const Pessoa &p){
    out << "Nome: " << p.nome;
    return out;
  }

  protected:
    string nome;

  public:
    Pessoa(string _nome) : nome(_nome){}
    string getNome(){ return nome; };
    void setNome( string _nome) { nome = _nome;}
};

#endif