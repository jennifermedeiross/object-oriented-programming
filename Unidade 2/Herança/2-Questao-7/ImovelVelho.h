#ifndef IMOVELVELHO_H
#define IMOVELVELHO_H

#include "Imovel.h"

class ImovelVelho : public Imovel{
  private:
    double desconto;

  public: 
    ImovelVelho(string e, double p, double dsc) : Imovel(e, p), desconto(dsc){}
    
    void setPrecoDesconto(){ preco = preco*desconto; };
    double getDesconto() { return desconto; }

    double getPreco(){ return preco; }
};

#endif