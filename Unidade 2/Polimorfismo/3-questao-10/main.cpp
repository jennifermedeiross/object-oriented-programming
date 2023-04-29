//GTK OU QT
// Glade

#include "Conta.h"
#include "ContaCorrenteComum.h"
#include "ContaCorrenteLimite.h"
#include "ContaPoupanca.h"

int main() {

  Conta *pc[3] = {new ContaCorrenteComum("Pessoa A", 1122, 500000),
    new ContaCorrenteLimite("Pessoa B", 3344, 100000, 30000), 
    new ContaPoupanca("Pessoa C", 5566, 1000000, 4)
  };

  for(int i = 0; i < 3; i++){
    pc[i]->deposito(500, "23/02/2022");
    pc[i]->retirada(1500, "10/04/2022");
    pc[i]->retirada(350, "13/04/2022");
    pc[i]->deposito(1000, "01/11/2022");
    pc[i]->deposito(5000, "20/02/2023");
    pc[i]->retirada(20000, "23/04/2023");
    pc[i]->extrato();
    delete pc[i];
  }
}