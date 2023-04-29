#include "Animal.h"
#include "Cachorro.h"
#include "Gato.h"

int main() {
  Animal a("Simba", "Hamster");
  Cachorro c("Jack");
  Gato g;

  cout << a;
  cout << a.caminha() << endl;

  cout << c;
  cout << c.caminha();
  cout << c.late() << endl;

  cout << g;
  cout << g.mia();
  cout << g.caminha();
  
}