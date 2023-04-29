#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "Pessoa.h"

class PessoaFisica : public Pessoa{
  private:
    string cpf;
  
  public:
    PessoaFisica(string _nome, string _cpf) : Pessoa(_nome), cpf(_cpf){}
    string getCpf(){ return cpf; };
    void setCpf( string c ){ cpf = c; };
};

#endif