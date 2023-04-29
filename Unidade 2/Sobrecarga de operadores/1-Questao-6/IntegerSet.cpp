#include "IntegerSet.h"

#include <iostream>
using std::cout, std::endl;

IntegerSet::IntegerSet()
{
  setZeros();
}

IntegerSet::IntegerSet(int *inteiros, int tam)
{
  setZeros();
  for (int i = 0 ; i < tam ; i++)
    nums[inteiros[i]] = 1;
}

void IntegerSet::setZeros()
{
  for (int i = 0 ; i < 100 ; i++)
    nums[i] = 0;
}

//////////////////////////////////////////////////////////////////

void IntegerSet::operator<<(int n){
  if (n >= 0 && n < 100)
    nums[n] = 1;
}

void IntegerSet::operator>>(int n){
  if (n >= 0 && n < 100)
    nums[n] = 0;
}

ostream &operator<<(ostream  &out, const IntegerSet &c){
  out << "[ ";
  for (int i = 0 ; i < 100 ; i++)
    if (c.nums[i])
      out << i << " ";
  out << "]" << endl;

  return out;
}

IntegerSet operator|(const IntegerSet &c1, const IntegerSet &c2){
  IntegerSet c3;

  for (int i = 0 ; i < 100 ; i++)
    c3.nums[i] = c1.nums[i] || c2.nums[i];
  
  return c3;
}

IntegerSet operator&(const IntegerSet &c1, const IntegerSet &c2){
  IntegerSet c3;

  for (int i = 0 ; i < 100 ; i++)
    c3.nums[i] = c1.nums[i] && c2.nums[i];
  
  return c3;
}