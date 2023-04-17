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

// FUNÇÕES FRIEND

 void somaArray(ArrayList& array, int elem){
   for(int i = 0; i < array.pos; i++){
     array.arr[i] += elem;
   }
 }

 void subArray(ArrayList& array, int elem){
   for(int i = 0; i < array.pos;i++){
     array.arr[i]-= elem;
   }   
 }

 void multArray(ArrayList& array, int elem){
    for(int i = 0; i < array.pos;i++){
     array.arr[i]*= elem;
   }  
 }

 void divArray(ArrayList & array, int elem){
    for(int i = 0; i < array.pos;i++){
     array.arr[i]/= elem;
   }   
}