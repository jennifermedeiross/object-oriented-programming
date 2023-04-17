#include <iostream>
using namespace std;

int main() {

  cout << "* Para sair, digite -1 no campo quilometragem *\n\n";
  while (true) {
    double kmP, litros, consumo, totalLitros;
  
    cout << "Quilometros percorridos: \n";
    cin >> kmP;

    if(kmP == -1) {
      cout << "\nTotal de litros consumidos: " << totalLitros;  
      break;
    }
    
    cout << "\nLitros de gasolina utilizados: \n";
    cin >> litros;

    consumo = kmP/litros;
    
    cout << "Consumo: "<< consumo<< "Km/L" <<endl << endl;
    totalLitros += litros;
  }

  
  
  return 0;
}