#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "Pessoa.h"

class PessoaFisica : public Pessoa{
  friend ostream &operator<<(ostream &out, const PessoaFisica &p){
    out << "-- Pessoa física --\n" << Pessoa(p) << endl;
    out << "CPF: " << p.cpf << endl << endl;
    return out;
  }

  private:
    string cpf;
  
  public:
    PessoaFisica(string _nome, string _cpf) : Pessoa(_nome), cpf(_cpf){}
    string getCpf(){ return cpf; };
    void setCpf( string c ){ cpf = c; };
};

#endif