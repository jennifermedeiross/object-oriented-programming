#include "Empregado.h"
using namespace std;

Empregado::Empregado(string n, string s, double sal){
  if (sal < 0)
    salario = 0;
  else
    salario = sal;

  nome = n;
  sobrenome = s;
}

void Empregado::setNome(string n){
  nome = n;
}
string Empregado::getNome(){
  return nome;
}

void Empregado::setSobrenome(string s){
  sobrenome = s;
}
string Empregado::getSobrenome(){
  return sobrenome;
}

void Empregado::setSalario(double sal){
  salario = sal;
}
double Empregado::getSalario(){
  return salario;
}

void Empregado::DisplayMessage(){
  cout << "Funcionári@: " << nome << " " << sobrenome << endl << "Salário: R$" << salario << endl;
}


