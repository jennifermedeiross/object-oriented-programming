#ifndef CONTACORRENTELIMITE_H
#define CONTACORRENTELIMITE_H

#include "Conta.h"

class ContaCorrenteLimite : public Conta {
  private:
    double limite;
  public:
    ContaCorrenteLimite(){}
    ContaCorrenteLimite(string _nomeCorrentista, int _numConta, double _saldo, double _limite) :
      Conta(_nomeCorrentista, _numConta, _saldo), limite(_limite){}

    void extrato();
    void retirada(double, string);
};

#endif