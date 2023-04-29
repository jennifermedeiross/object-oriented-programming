#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal{
  friend ostream &operator<<(ostream &, const Animal &);
  
  public: 
    Animal();
    Animal(string n, string r);

    void setNome(string n){nome = n;}
    void setRaca(string r){raca = r;}
    string caminha();

  protected: 
    string nome, raca;
};

#endif