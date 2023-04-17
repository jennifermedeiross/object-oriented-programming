#include "Data.h"
using namespace std;

int main() {
  Data data(04,04,2003);
  
  data.MostrarData();
  data.setAno(2023);
  data.MostrarData();
  cout << "Novo ano: " << data.getAno() << endl;
  cout << "Dia: " << data.getDia() << endl;
  cout << "Mês: " << data.getMes() << endl;
  
}