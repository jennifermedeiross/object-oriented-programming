#include "Pessoa.h"

Pessoa:: Pessoa (string n, string c){
  nome = n;
  cpf = c;
}

void Pessoa:: setNome(string n){
  nome = n;
}
void Pessoa:: setCPF(string c){
  cpf = c;
}

bool Pessoa::ValidaCPF(){
  int dig1 = 0, dig2 = 0, count;

  // PRIMEIRO DÍGITO
  count = 10;
  for (int i = 0; i < 9; i ++){
    int digito = cpf[i] - '0';
    dig1 += digito*count--;
  } dig1 = (dig1 * 10) % 11;

  // SEGUNDO DIGITO
  count = 11;
  for (int i = 0; i <= 9; i ++){
    int digito = cpf[i] - '0';
    dig2 += digito*count--;
  }
  dig2 = (dig2 * 10) % 11;

  if (dig1 == cpf[9]-'0' && dig2 == cpf[10]-'0') return true;

  return false;
}

void Pessoa::apresentar(){
  cout << "Nome: " << nome << endl;
  cout << "CPF: " << cpf << (ValidaCPF() ? " (Válido)\n" : " (Inválido)\n") << endl;
}
