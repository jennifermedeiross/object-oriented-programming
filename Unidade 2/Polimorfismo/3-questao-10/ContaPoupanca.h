#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include "Conta.h"

class ContaPoupanca : public Conta{
  private:
    int dia;
    string dataAtual, dataProx;

  public:
    ContaPoupanca(){}
    ContaPoupanca(string _nomeCorrentista, int _numConta, double _saldo, int _dia) :
      Conta(_nomeCorrentista, _numConta, _saldo), dia(_dia){}

    void extrato();

    void credAniversarioConta(); // Construir
};

#endif