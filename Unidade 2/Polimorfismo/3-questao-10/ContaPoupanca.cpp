#include "ContaPoupanca.h"

void ContaPoupanca::extrato(){
  cout << "\n\n********* CONTA POUPANÇA *********\n";
  cout << "Nome: "<< this->getNomeCorrentista() << endl;
  cout << "Número da conta: "<< this->getNumConta() << endl;
  cout << "Saldo: R$ " << this->saldo << endl;
  cout << "Aniversário: " << this->dia << endl;
  imprimeTransacoes();
  cout << "**********************************\n";
}
