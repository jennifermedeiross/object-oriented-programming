#include "cupom.h"

int main() {
  cout << "\n--------------------------------------------\n";
  Cupom cupom("31415", "MousePad preto com led", 10, 31.5);

  cupom.getId();
  cupom.getDescricao();
  cupom.getQuantidade();
  cupom.getPreco();
  cout << "--------------------------------------------\n";

  cupom.calculaCupom();
  cout << "\n--------------------------------------------\n";

  cout << "\n*Correção de preço*\n";
  cupom.setPreco(42.123);
  cupom.getPreco();
  
  cupom.calculaCupom();
  cout << "\n--------------------------------------------\n";
}