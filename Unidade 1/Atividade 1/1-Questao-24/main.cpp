#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void ha_maiusc (string fr){
  int confirm = 0;
  for (int i = 0; i < fr.length(); i++){
    if (fr[i] == toupper(fr[i])){
      confirm = 1;
    }
  }
  if(confirm == 1)
    cout << "Há letra(s) maiúscula(s) na string!\n"; 
  else cout << "Não há letra(s) maiúscula(s) na string!\n";
  
}

int main() {
  string frase;
  cout << "Digite uma frase: \n";
  getline(cin, frase);

  ha_maiusc(frase);

  return 0;
}