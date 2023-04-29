#ifndef FORMABI_H
#define FORMABI_H 

//classe abstrata

class FormaBidimensional 
{
public:
  FormaBidimensional(int numLados) : numLados(numLados) { }
  virtual ~FormaBidimensional(){}

  //método virtual puro
  virtual void desenhar() = 0;
  virtual void calculaArea() = 0;
  virtual void calculaPerimetro() = 0;

private:
  int numLados;
};

#endif