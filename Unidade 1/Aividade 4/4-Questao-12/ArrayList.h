#ifndef ARRAYLIST_H
#define ARRAYLIST_H

class ArrayList
{
public:
  ArrayList(int);
  ~ArrayList();

  ArrayList &add(int);

  void print() const;

private:
  int *arr;
  int tam;
  int pos;
  friend void somaArray(ArrayList&, int);
  friend void subArray(ArrayList&, int);
  friend void multArray(ArrayList&, int);
  friend void divArray(ArrayList &, int);
};

#endif