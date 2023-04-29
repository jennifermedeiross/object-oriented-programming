#ifndef IMOVELNOVO_H
#define IMOVELNOVO_H

#include "Imovel.h"

class ImovelNovo : public Imovel{
  private:
    double adicional;

  public: 
    ImovelNovo(string e, double p, double ad) : Imovel(e, p), adicional(ad){}
    
    void setPrecoAdicional(){ preco = preco*adicional; };
    double getAdicional() { return adicional; }

    double getPreco(){return preco;}
};

#endif