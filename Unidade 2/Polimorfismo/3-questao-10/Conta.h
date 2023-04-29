#ifndef CONTA_H
#define CONTA_H

#include "Transacoes.h"
#include <iostream>
#include <string>
using namespace std;

class Conta{
  private:
    int numConta;
    string nomeCorrentista;

  protected:  
    Transacoes transacoesConta[100];
    double saldo;
    int qntTransacoes = 0;
  
  public:
    Conta(){}
    Conta(string _nomeCorrentista, int _numConta, double _saldo) :
      nomeCorrentista(_nomeCorrentista), numConta(_numConta), saldo(_saldo){}
    virtual ~Conta(){}

    int getNumConta() const { return numConta; }
    string getNomeCorrentista() const { return nomeCorrentista; }

    void setNumConta(int n){ numConta = n; }
    void setNomeCorrentista(string n){ nomeCorrentista = n; }

    virtual void deposito(double, string);
    virtual void retirada(double, string);
    virtual void extrato() = 0;

    void adicionaTransacao(Transacoes &);
    void imprimeTransacoes();

};

#endif