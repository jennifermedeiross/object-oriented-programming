#ifndef COMPLEX_H
#define COMPLEX_H


class Complex {
  friend Complex operator+(const Complex &, const Complex &);
  friend Complex &operator+=(Complex &, const Complex &);

  friend Complex operator-(const Complex &, const Complex &);
  friend Complex &operator-=(Complex &, const Complex &);

  public:
    Complex(int, int);
    Complex();

    Complex &operator++();  
    Complex &operator--();

    Complex operator++(int);  
    Complex operator--(int);
    
    void print() const;
  private:
    int real, img;
};

#endif