#ifndef TRANSACOES_H
#define TRANSACOES_H

#include <iostream>
#include <string>

using namespace std;

class Transacoes{
  private:
    string data, descricao;
    double valorTransacao;

  public:
    Transacoes(string _data, double _valorTransacao, string _descricao) :
      data(_data), valorTransacao(_valorTransacao), descricao(_descricao){}
    Transacoes(){}

    string getData(){ return data; }
    double getValorTransacao(){ return valorTransacao; }
    string getDescricao(){ return descricao; }

    void imprimeTransacao() {
      cout << "-------------------------\n";
      cout << "Data: " << this->data << endl;
      cout << "Valor: R$" << this->valorTransacao << endl;
      cout << "Descrição: " << this->descricao << endl;
      cout << "-------------------------\n";
    }
};


#endif