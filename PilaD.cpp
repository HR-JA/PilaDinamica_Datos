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
  GUI grahp;
  for(int i=0;temp!=NULL;i++){
    if(i!=cont-1)grahp.pila(temp->value,i);
    else grahp.pila(temp->value,-1);
    temp = temp->next;
  }
  /*linea 1 de 3
  for(int i=0; i<cont; i++){
    if(i==0){
     cout << "\t" <<"TOP"; 
    }else{
      cout << "\t" <<"***";
    }
  }
  */
  //cout <<endl; paso a linea 2
  /*
  while(temp!=NULL){//linea dos con los datos a imprimir
    if(temp==pila){
      cout <<"\t*"<<temp->value<<"*";
      temp=temp->next;
    }else{
      cout <<"\t*"<<temp->value<<"*";
      temp = temp->next;
    }
    
  }
  */
  //cout << endl;paso a linea 3
  /*linea 3
  for(int i=0; i<cont; i++){
    cout << "\t" <<"***";
  }*/
  
};
int Nodo::vacia(int tope){
    GUI graf;
    if(tope==0){
        graf.Msg("LA PILA ESTA VACIA");
        return 1;
    }
    else{
        return 0;
    }
};
