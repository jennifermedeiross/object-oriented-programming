#include "Animal.h"

Animal::Animal(string n, string r){
  setNome(n);
  setRaca(r);
}

Animal::Animal(){
  setNome("Alex");
  setRaca(raca = "Leão");
}

string Animal::caminha(){
  string cam = this->raca + " " + this->nome + " a caminhar...\n"; 
  return cam;
}

ostream &operator<<(ostream &out, const Animal &a){
  out << "Nome: " << a.nome << endl;
  out << "Raça: " << a.raca << endl;

  return out;
}