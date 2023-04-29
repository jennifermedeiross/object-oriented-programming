#include "Empresa.h"
#include "Funcionario.h"
#include "Cliente.h"

int main() {
  Empresa empresa("DevStore", "55.949.434/0001-24", "DevStore indústrias Ltda");
  
  Funcionario fun0("Jennifer", "225.644.800-20", 100, 6000, 160, 160),
              fun1("Maria", "815.272.410-68", 101, 4500, 160, 135),
              fun2("João", "883.845.450-73", 102, 6460, 160, 160),
              fun3("José", "225.644.800-20", 103, 6000, 160, 160),
              fun4("Ana", "815.272.410-68", 104, 4500, 160, 135),
              fun5("Francisco", "883.845.450-73", 105, 6460, 160, 160);
  empresa.adicionaFuncionario(fun0);
  empresa.adicionaFuncionario(fun1);
  empresa.adicionaFuncionario(fun2);
  empresa.adicionaFuncionario(fun3);
  empresa.adicionaFuncionario(fun4);
  empresa.adicionaFuncionario(fun5);

  Cliente cnt0("Jennifer", "225.644.800-20", "(95) 2764-4140", "Rua A"),
          cnt1("Maria", "815.272.410-68", "(14) 3529-5470", "Rua B"),
          cnt2("João", "883.845.450-73", "(98) 3117-6621", "Rua C"),
          cnt3("José", "225.644.800-20", "(83) 2416-5422", "Rua D"),
          cnt4("Ana", "815.272.410-68", "(63) 3123-1314", "Rua F"),
          cnt5("Francisco", "883.845.450-73", "(38) 3263-2538", "Rua G"),
          cnt6("Jennifer", "225.644.800-20", "(95) 2764-4140", "Rua A"),
          cnt7("Maria", "815.272.410-68", "(14) 3529-5470", "Rua B"),
          cnt8("João", "883.845.450-73", "(98) 3117-6621", "Rua C"),
          cnt9("José", "225.644.800-20", "(83) 2416-5422", "Rua D"),
          cnt10("Ana", "815.272.410-68", "(63) 3123-1314", "Rua F"),
          cnt11("Francisco", "883.845.450-73", "(38) 3263-2538", "Rua G");
  empresa.adicionaCliente(cnt0);
  empresa.adicionaCliente(cnt1);
  empresa.adicionaCliente(cnt2);
  empresa.adicionaCliente(cnt3);
  empresa.adicionaCliente(cnt4);
  empresa.adicionaCliente(cnt5);
  empresa.adicionaCliente(cnt6);
  empresa.adicionaCliente(cnt7);
  empresa.adicionaCliente(cnt8);
  empresa.adicionaCliente(cnt9);
  empresa.adicionaCliente(cnt10);
  empresa.adicionaCliente(cnt11);
  
  cout << empresa;

}