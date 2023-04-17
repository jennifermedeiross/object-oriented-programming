#ifndef CARRO_H
#define CARRO_H

#include <string>
using std::string;

//Interface
class Carro
{

public:

  Carro(string nome, string anoCarro);

  void setMarca(string nome);
  string getMarca();

  void displayMessage();

  void setAno(string anoCarro);
  string getAno();

private:
  string marca;
  string ano;
};

#endif