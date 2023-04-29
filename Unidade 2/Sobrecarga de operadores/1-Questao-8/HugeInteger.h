#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H

#include <iostream>
using namespace std;

class HugeInteger
{
  friend ostream &operator<<(ostream &, const HugeInteger &);

  public:
    HugeInteger(const char * = "");
    void input(const char *);

    HugeInteger operator=(HugeInteger &);
  
    void add(const HugeInteger &);
  
    HugeInteger operator+(const HugeInteger &);
  
    bool isEqualTo(const HugeInteger &) const;
    
    bool isNotEqualTo(const HugeInteger &n2) const
    {
      return !isEqualTo(n2);
    }
  
    bool isGreaterThan(const HugeInteger &) const;
  
    bool isLessThan(const HugeInteger &n2) const
    {
      return n2.isGreaterThan(*this);
    }
  
    bool isGreaterThanOrIqual(const HugeInteger &n2) const
    {
      return !(n2.isGreaterThan(*this));
    }  
  
    bool isLessThanOrIqual(const HugeInteger &n2) const
    {
      return !isGreaterThan(n2);
    }  
    
  
  private:
    char num[40];
    int tam;
  
    bool validar(const char *);
};


#endif