#ifndef ARRAYLIST_H
#define ARRAYLIST_H

class ArrayList
{
public:
  ArrayList(int);
  ~ArrayList();

  ArrayList &add(int);
  int busca(int i);
  void remove(int i);
  void removeEl(int i);

  void print() const;

private:
  int *arr;
  int tam;
  int pos;
};

#endif