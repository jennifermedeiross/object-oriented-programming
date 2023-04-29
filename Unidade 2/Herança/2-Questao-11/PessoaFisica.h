#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "Pessoa.h"

class PessoaFisica : public Pessoa{
  friend ostream &operator<<(ostream &out, const PessoaFisica &p){
    out << Pessoa(p) << endl;
    out << "CPF: " << p.cpf << endl;
    return out;
  }

  private:
    string cpf;
  
  public:
    PessoaFisica(string _nome, string _cpf) : Pessoa(_nome), cpf(_cpf){}
    PessoaFisica(){}
    string getCpf(){ return cpf; };
    void setCpf( string c ){ cpf = c; };
};

#endif