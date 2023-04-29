#include "Cachorro.h"

Cachorro::Cachorro(){
  setRaca("Cachorro"); 
  setNome("Rex");
}

Cachorro::Cachorro(string n){
  setRaca("Cachorro"); 
  setNome(n);
}

string Cachorro::late(){
  string latir = this->nome + ", um cão muito simpático, saúda todos ao seu redor: -Au Au Au\n"; 
  return latir;
}