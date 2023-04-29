#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include "Pessoa.h"

class PessoaJuridica : public Pessoa{
  friend ostream &operator<<(ostream &out, const PessoaJuridica &p){
    out << "-- Pessoa jurídica --\n" << Pessoa(p) << endl;
    out << "CNPJ: " << p.cnpj << endl;
    out << "Razão social: " << p.razaoSocial << endl << endl;
    
    return out;
  }

  private:  
    string cnpj, razaoSocial;

  public:
    PessoaJuridica(string _nomeFantasia, string _cnpj, string _razaoSocial) :
      Pessoa(_nomeFantasia), cnpj(_cnpj), razaoSocial(_razaoSocial){}

    string getCnpj(){ return cnpj; };
    string getRazaoSocial(){ return razaoSocial; };

    void setCnpj( string c ){ cnpj = c; };
    void setRazaoSocial( string r ){ razaoSocial = r;};
};

#endif