#include "ContaBanco.h"

using namespace std;

ContaBanco::ContaBanco(double saldoInicial){
  if (saldoInicial >= 0)
    saldo = saldoInicial;
  else
    saldo = 0;
}

void ContaBanco::Creditar(double saldoCreditado){
  saldo += saldoCreditado;
}

void ContaBanco::Debitar(double saldoDebitado){
  if (saldoDebitado > saldo)
   cout << "O valor desejado ultrapassa o valor disponível" << endl;
  else
    saldo -= saldoDebitado;
}

double ContaBanco::getSaldo(){

  return saldo;
}

void ContaBanco::DisplayMessage(){
  cout << "Saldo atual: " << getSaldo() << endl;
}
