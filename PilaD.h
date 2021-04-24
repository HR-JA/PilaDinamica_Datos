#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;
class Nodo{
  public:
    int value;
    Nodo* next;
    void push(Nodo *&pila, int n);
    void pop(Nodo *&pila);
    void display(Nodo *&pila, int cont);
};
#endif