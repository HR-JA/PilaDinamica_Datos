#include "PilaD.h"
void Nodo::push(Nodo *&pila, int n){
  Nodo *temp = new Nodo();
  temp->value = n;
  temp->next = pila;
  pila = temp;
};
void Nodo::pop(Nodo *&pila){
  Nodo *temp = pila;
  pila = temp->next;
  delete(temp);
};
void Nodo::display(Nodo *&pila, int cont){
  Nodo *temp = pila;
  for(int i=0; i<cont; i++){
    if(i==0){
     cout << "\t" <<"TOP"; 
    }else{
      cout << "\t" <<"***";
    }
  }
  cout <<endl;
  while(temp!=NULL){
    if(temp==pila){
      cout <<"\t*"<<temp->value<<"*";
      temp=temp->next;
    }else{
      cout <<"\t*"<<temp->value<<"*";
      temp = temp->next;
    }
  }
  cout << endl;
  for(int i=0; i<cont; i++){
    cout << "\t" <<"***";
  }
};
