#include <iostream>
using std::cout,std::endl;

#include "ArrayList.h"

ArrayList::ArrayList(int tam) : pos(0)
{
  if (tam > 0)
  {
    this->tam = tam;
    arr = new int[tam];
  }
  else
  {
    arr = nullptr;
    this->tam = 0;
  }
}

  ArrayList::~ArrayList()
  {
    if (arr)
      delete [] arr;
  }

  ArrayList &ArrayList::add(int v)
  {
    if (pos < tam)
      arr[pos++] = v;
    
    return *this;
  }

  void ArrayList::print() const
  {
    for (int i = 0 ; i < pos ; i++)
      std::cout << arr[i] << " ";
    std::cout << std::endl;
  }

int ArrayList::busca(int i){
  return (arr[i] ? i : -1);
}

void ArrayList::remove(int i) {
  if(i >= pos) return;

  for (int c = i; c < pos-1; c++) arr[c] = arr[c+1];
  --pos;
} 

void ArrayList::removeEl(int i){
  int count = 0;
  for(int c = 0; c < tam ; c++) arr[c]==i ? count++ : arr[c - count] = arr[c];

  for (int c = tam - count; c < tam; c++) {
    remove(c);
  }
  remove(tam-count-1);
}