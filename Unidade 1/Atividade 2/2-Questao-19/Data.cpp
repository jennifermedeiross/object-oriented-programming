#include "Data.h"
using namespace std;

Data::Data(int d, int m, int a){
  dia = d;
  mes = (m <= 12 && m >= 1) ? m : 1;
  ano = a;
}

void Data:: setDia(int d){
  dia = d;
}
void Data:: setMes(int m){
  mes = m;
}
void Data:: setAno(int a){
  ano = a;
}

int Data:: getDia(){ return dia; }
int Data:: getMes(){ return mes; }
int Data:: getAno(){ return ano; }

void Data:: MostrarData(){
  cout << "Data : " << dia << "/" << mes << "/" << ano << endl;
}