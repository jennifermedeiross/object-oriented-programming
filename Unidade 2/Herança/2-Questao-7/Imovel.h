#ifndef IMOVEL_H
#define IMOVEL_H

#include <iostream>
using namespace std;

class Imovel{

  public:
    Imovel(){}
    Imovel(string e, double p) : end(e), preco(p){}

    string getEnd(){return end;}
    double getPreco(){return preco;}

    void setPreco(double p){ preco = p;}
    void setEnd(string e){ end = e;}

  protected:
    string end;
    double preco;
};

#endif