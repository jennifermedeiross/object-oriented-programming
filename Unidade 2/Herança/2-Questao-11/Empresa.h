#ifndef EMPRESA_H
#define EMPRESA_H

#include "PessoaJuridica.h"
#include "Cliente.h"
#include "Funcionario.h"

class Empresa : public PessoaJuridica {
  friend ostream &operator<<(ostream &, Empresa &);

  private:
    Cliente clientes[15];
    Funcionario funcionarios[10];
    int qntFuncionarios = 0, qntClientes = 0;
    double calculo;  

  public:
    Empresa(string _nomeFantasia, string _cnpj, string _razaoSocial) :
      PessoaJuridica(_nomeFantasia, _cnpj, _razaoSocial) {}
    
    void adicionaFuncionario(Funcionario &);
    void removeFuncionario(Funcionario &);

    void adicionaCliente(Cliente &);
    void removeCliente(Cliente &);

    void imprimeFuncionarios() const;
    void imprimeClientes() const;

    double calculaFolhaDePagamento();
};


#endif