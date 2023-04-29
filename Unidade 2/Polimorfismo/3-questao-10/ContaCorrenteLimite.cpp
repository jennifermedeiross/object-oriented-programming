#include "ContaCorrenteLimite.h"

void ContaCorrenteLimite::extrato(){
  cout << "\n\n********* CONTA CORRENTE LIMITE *********\n";
  cout << "Nome: "<< this->getNomeCorrentista() << endl;
  cout << "Número da conta: "<< this->getNumConta() << endl;
  cout << "Saldo: R$ " << this->saldo << endl;
  cout << "Limite: R$ " << this->limite << endl;
  imprimeTransacoes();
  cout << "*****************************************\n";
}

void ContaCorrenteLimite::retirada(double val, string dt){
  if(val <= this->saldo+this->limite){
    this->saldo -= val;
    Transacoes t(dt, -val, "\U0001f534 Retirada");
    this->adicionaTransacao(t);
    qntTransacoes++;
  } else {
    cout << "!!! Erro !!! \nValor não disponível para retirada." << endl << endl;
  }
}
