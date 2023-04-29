#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "PessoaFisica.h"

class Funcionario : public PessoaFisica {
  friend ostream &operator<<(ostream &, Funcionario &);

  private: 
    int matricula;
    double salarioBase, cargaMensal, horasTrabalhadas;

  public:
    Funcionario(string _nome, string _cpf, int _matricula, double _salarioBase, double _cargaMensal, double _horasTrabalhadas) :
    PessoaFisica(_nome, _cpf), 
    matricula(_matricula), 
    salarioBase(_salarioBase), 
    cargaMensal(_cargaMensal), 
    horasTrabalhadas(0 <= _horasTrabalhadas && _horasTrabalhadas <= cargaMensal ? _horasTrabalhadas : 0) {}

    Funcionario(){}

    double calculaSalarioBruto();

    void setMatricula( int );
    void setSalarioBase( double );
    void setCargaMensal( double );
    void setHorasTrabalhadas( double );

    int getMatricula() { return matricula; };
    double getSalarioBase() { return salarioBase; };
    double getCargaMensal() { return cargaMensal; };
    double getHorasTrabalhadas() { return horasTrabalhadas; };
};

#endif