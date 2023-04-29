#include "ContaCorrenteComum.h"

void ContaCorrenteComum::extrato(){
  cout << "\n\n********* CONTA CORRENTE COMUM *********\n";
  cout << "Nome: "<< this->getNomeCorrentista() << endl;
  cout << "Número da conta: "<< this->getNumConta() << endl;
  cout << "Saldo: R$ " << this->saldo << endl;
  imprimeTransacoes();
  cout << "****************************************\n";
}