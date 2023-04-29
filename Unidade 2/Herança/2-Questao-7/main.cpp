#include "Imovel.h"
#include "ImovelVelho.h"
#include "ImovelNovo.h"

int main() {
  ImovelNovo iN("Rua A, João Pessoa", 15000, 1.2);
  ImovelVelho iV("Rua B, Campina Grande", 10000, 0.8);

  cout << "Imovél novo: \n";
  cout << "Endereço: " << iN.getEnd() << endl;
  cout << "Preço: R$" << iN.getPreco() << endl;
  cout << "Preço com adicional de " << iN.getAdicional()<< " : R$";
  iN.setPrecoAdicional();
  cout << iN.getPreco() << endl << endl;

  cout << "Imovél velho: \n";
  cout << "Endereço: " << iV.getEnd() << endl;
  cout << "Preço: R$" << iV.getPreco() << endl;
  cout << "Preço com desconto de " << iV.getDesconto()<< " : R$";
  iV.setPrecoDesconto();
  cout << iV.getPreco() << endl;
}