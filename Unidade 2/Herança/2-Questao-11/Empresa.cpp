#include "Empresa.h"

ostream &operator<<(ostream &out, Empresa &e){
  out << "---------------------- EMPRESA ----------------------\n\n";
  out << PessoaJuridica(e);
  out << "Folha de pagamento: R$" << e.calculaFolhaDePagamento() << endl;
  out << "\n---------------------- FUNCIONÁRIOS ----------------------\n";
  e.imprimeFuncionarios();
  out << "---------------------- CLIENTES ----------------------\n";
  e.imprimeClientes();
  
  return out;
}

void Empresa::adicionaFuncionario(Funcionario &f){
  funcionarios[qntFuncionarios] = Funcionario(f);
  qntFuncionarios++;
}

void Empresa::adicionaCliente(Cliente &c){
  clientes[qntClientes] = Cliente(c);
  qntClientes++;
}

void Empresa::imprimeFuncionarios() const{
  for(int i = 0; i < this->qntFuncionarios; i++){
    Funcionario f(funcionarios[i]);
    cout << f;
    }
  }

void Empresa::imprimeClientes() const{
  for(int i = 0; i < this->qntClientes; i++){
    Cliente c(clientes[i]);
    cout << c;
    }
  }

double Empresa::calculaFolhaDePagamento(){
  for(int i = 0; i < qntFuncionarios; i++){
    calculo += funcionarios[i].calculaSalarioBruto();}
  
  return calculo;
}