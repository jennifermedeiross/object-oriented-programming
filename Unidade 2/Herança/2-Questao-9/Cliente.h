#ifndef CLIENTE_H
#define CLIENTE_H

#include "PessoaFisica.h"

class Cliente : public PessoaFisica {
  friend ostream &operator<<(ostream &out, const Cliente &c){
    out << "-- Cliente -- " << endl;
    out << Pessoa(c) << endl;
    out << "CPF: " << PessoaFisica(c).getCpf() << endl;
    out << "Telefone: " << c.tell << endl;
    out << "Endereço: " << c.end << endl << endl;

    return out;
  }

  private: 
    string tell, end;

  public: 
    Cliente(string _nome, string _cpf, string _tell, string _end) : 
      PessoaFisica(_nome, _cpf), tell(_tell), end(_end){}
    Cliente();

    void setTell( string _tell ) { tell = _tell;}
    void setEnd( string _end ) { end = _end;}

    void getTell( string _tell ) { tell = _tell;}
    void getEnd( string _end ) { end = _end;}
};

#endif