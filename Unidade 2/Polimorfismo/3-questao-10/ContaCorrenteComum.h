#ifndef CONTACORRENTECOMUM_H
#define CONTACORRENTECOMUM_H

#include "Conta.h"

class ContaCorrenteComum : public Conta{

  public:
    ContaCorrenteComum();
    ContaCorrenteComum(string _nomeCorrentista, int _numConta, double _saldo) :
      Conta(_nomeCorrentista, _numConta, _saldo){}

    void extrato();
  
};

#endif