#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>
#include <string>

using namespace std;

class Empregado{
 public:
  Empregado(string n, string s, double sal);

  void setNome(string n);
  string getNome();

  void setSobrenome(string s);
  string getSobrenome();

  void setSalario(double sal);
  double getSalario();

  void DisplayMessage();

private:
  string nome;
  string sobrenome;
  double salario;
};


#endif