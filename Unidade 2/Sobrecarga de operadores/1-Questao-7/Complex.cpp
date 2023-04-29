#include <iostream>
using std::cout;

#include "Complex.h"

Complex::Complex(int a, int b){ real = a; img = b;}

Complex::Complex(){real = 0; img = 0;}

Complex operator+(const Complex &c1, const Complex &c2)
{
  Complex res;
  res.real = c1.real + c2.real;
  res.img = c1.img + c2.img; 
  return res;
}

Complex &operator+=(Complex &c1, const Complex &c2){
  c1 = c1 + c2;
  return c1;
}

Complex operator-(const Complex &c1, const Complex &c2)
{
  Complex res;
  res.real = c1.real - c2.real;
  res.img = c1.img - c2.img; 
  return res;
}

Complex &operator-=(Complex &c1, const Complex &c2){
  c1 = c1 - c2;
  return c1;
}

Complex &Complex::operator++(){
  this->real = (this->real) + 1;

  return *this;
}

Complex &Complex::operator--(){
  this->real = (this->real) - 1;
  return *this;
}

Complex Complex::operator++(int){
  Complex c(*this);
  this->real = (this->real) + 1;

  return c;
}

Complex Complex::operator--(int){
  Complex c(*this);
  this->real = (this->real) - 1;

  return c;
}


void Complex::print() const
{
  cout << real << (img >= 0 ? " + " : "") << img << " * i\n";
}