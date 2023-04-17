#include "cupom.h"

Cupom::Cupom (string id, string desc, int qnt, float prec){
  ID = id;
  descricao = desc;
  quantidade = (qnt > 0 ? qnt : 0);
  preco = (prec > 0 ? prec : 0);
}

void Cupom:: setId(string id){ ID = id; }
void Cupom:: setDescricao(string desc){ descricao = desc; }
void Cupom:: setIQuantidade(int qnt){ quantidade = qnt; }
void Cupom:: setPreco(float prec){ preco = prec; }

void Cupom:: getId(){cout << "ID: " << ID << endl;}
void Cupom:: getDescricao(){cout << "Descrição: " << descricao<< endl;}
void Cupom:: getQuantidade(){cout << "Quantidade: " << quantidade<< endl;}
void Cupom:: getPreco(){cout << "Preço: R$" << preco << endl;}

void Cupom::calculaCupom(){
  cupom = (preco * quantidade);

  cout << "\nCUPOM: \n\nR$" << cupom << endl;
}