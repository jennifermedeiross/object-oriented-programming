#ifndef CUPOM_H
#define CUPOM_H

#include <iostream>
#include <string>
using namespace std;

class Cupom{
  public:
    Cupom(string id, string desc, int qnt, float prec);

    void setId(string id);
    void getId();
    
    void setDescricao(string desc);
    void getDescricao();
    
    void setIQuantidade(int qnt);
    void getQuantidade();
    
    void setPreco(float prec);
    void getPreco();

    void calculaCupom();

  private:
    string ID, descricao;
    int quantidade;
    float preco, cupom;
};

#endif