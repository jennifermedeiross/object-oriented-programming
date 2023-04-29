#include "Conta.h"

void Conta::deposito(double val, string dt){
      this->saldo += val;
      Transacoes t(dt, val, "\U0001f7e2 Depósito");
      this->adicionaTransacao(t);
      qntTransacoes++;
}

void Conta::retirada(double val, string dt){
  if(val <= this->saldo){
    this->saldo -= val;
    Transacoes t(dt, -val, "\U0001f534 Retirada");
    this->adicionaTransacao(t);
    qntTransacoes++;
  } else {
    cout << "!!! Erro !!! \nValor não disponível para retirada." << endl << endl;
  }
}

void Conta::imprimeTransacoes(){
  for(int i = 0; i < qntTransacoes; i++){
    Transacoes(this->transacoesConta[i]).imprimeTransacao();
  }
}

void Conta::adicionaTransacao(Transacoes &t){
  transacoesConta[qntTransacoes] = t;
}