#include "Gato.h"

Gato::Gato(){
  setRaca("Gato"); 
  setNome("Bichano");
}

Gato::Gato(string n){
  setRaca("Gato"); 
  setNome(n);
}

string Gato::mia(){
  string miar = this->nome + ", um gatinho muito simpático, saúda todos ao seu redor: -Miau Miau Miau\n"; 
  return miar;
}