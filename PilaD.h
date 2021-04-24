#ifndef NODO_H
#define NODO_H
#include <iostream>
#include "GUI.h"
using namespace std;
class Nodo{
  public:
    int value;
    Nodo* next;
    void push(Nodo *&pila, int n);
    void pop(Nodo *&pila);
    void display(Nodo *&pila, int cont);
    int vacia(int tope);
};
#endif