#include "Retangulo.h"

int main() {
  Retangulo r1(20,30);

  cout << "Altura: " << r1.getAltura() << "  |  " << "Largura: " << r1.getLargura() << endl;

  cout << "\nPerímetro: " << r1.Perimetro() << endl;
  cout << "Área: " << r1.Area() << " u.a" << endl;

  r1.setAltura(500);
  cout << "\nAltura: " << r1.getAltura() << "  |  " << "Largura: " << r1.getLargura() << endl;
  cout << "\nPerímetro: " << r1.Perimetro() << endl;
  cout << "Área: " << r1.Area() << " u.a" << endl;
}