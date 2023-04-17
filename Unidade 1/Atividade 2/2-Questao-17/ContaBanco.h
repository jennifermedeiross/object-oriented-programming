#ifndef CONTABANCO_H
#define CONTABANCO_H
#include <iostream>

class ContaBanco{
  public:

    ContaBanco(double saldoInicial);
  
    void Creditar(double saldoCreditado);
    void Debitar(double saldoDebitado);
    void DisplayMessage();
    double getSaldo();

  private:
    double saldo; 
};

#endif