#include "Funcionario.h"

ostream &operator<<(ostream &out, Funcionario &p){
  out << "------- FUNCIONARIO(A) -------\n\n";
  out << PessoaFisica(p);
  out << "Matrícula: " << p.getMatricula() << endl;
  out << "Salário base: " << p.getSalarioBase() << endl;
  out << "Carga horária mensal: " << p.getCargaMensal() << endl;
  out << "Horas trabalhadas: " << p.getHorasTrabalhadas() << endl;
  out << "Salário bruto: R$" << p.calculaSalarioBruto() << endl << endl;

  return out;
}

double Funcionario::calculaSalarioBruto(){
  double bruto;

  bruto = this->salarioBase * (this->horasTrabalhadas / this->cargaMensal);

  return bruto;
}

void Funcionario::setMatricula( int m ){
  matricula = m;
}

void Funcionario::setSalarioBase(double s){
  salarioBase = s;
}

void Funcionario::setCargaMensal(double c){
  cargaMensal = c;
}

void Funcionario::setHorasTrabalhadas(double h){
  if(0 <= h && h <= cargaMensal) {
    horasTrabalhadas = h;
  }
  else {
    horasTrabalhadas = 0;
  }
}