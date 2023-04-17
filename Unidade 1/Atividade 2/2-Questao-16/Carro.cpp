#include <iostream>
using std::cout, std::endl;

#include "Carro.h"

//Implementação

Carro::Carro(string nome, string ano)
{ //modificação 1
  setMarca(nome);
  setAno(ano);
}

void Carro::setMarca(string nome)
{ //modificação 2
  if (nome == "")
    marca = "\"Sem Marca\"";
  else if (nome.length() > 10)
    marca = nome.substr(0,10);
  else
    marca = nome;
}

void Carro::setAno(string anoCarro){
  if (anoCarro == "")
    ano = "\"Sem ano\"";
  else
    ano = anoCarro;
}

string Carro::getMarca()
{
  return marca;
}

string Carro::getAno(){
  return ano;
}

void Carro::displayMessage()
{
  std::cout << "Olá, eu sou um carro da marca " << getMarca() << " e ano " << getAno() << endl;
}
