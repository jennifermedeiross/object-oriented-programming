#ifndef DATA_H
#define DATA_H

#include <iostream>

class Data{
  public:
    Data(int d, int m, int a);

    void setDia(int d);
    int getDia();
    
    void setMes(int m);
    int getMes();
    
    void setAno(int a);
    int getAno();

    void MostrarData();

  private:
    int dia, mes, ano;
};


#endif