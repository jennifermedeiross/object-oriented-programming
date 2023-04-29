#ifndef INTEGER_SET_H
#define INTEGER_SET_H 

#include <iostream>
using namespace std;

class IntegerSet 
{
  friend IntegerSet operator|(const IntegerSet &, const IntegerSet &);
  friend IntegerSet operator&(const IntegerSet &, const IntegerSet &);
  friend ostream &operator<<(ostream &, const IntegerSet &);

public:
  IntegerSet();
  IntegerSet(int *, int );

  void operator<<(int );
  void operator>>(int );

private:
  int nums[100];
  void setZeros();
};

#endif