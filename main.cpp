#include "PilaD.h"
#include <cstdlib>
int menu(){
  int opc;
  cout <<"\n\n1.- Push"
         "\n2.- Pop"
         "\n0.- Salir"<<endl;
  cin>>opc;
  return opc;
}

int main(){
  Nodo *pila = NULL;
  int value, dat, cont=0, opc=1;
  do {
    switch (menu()) {
      case 1:{
        cont++;
        pila->push(pila, cont);
        system("clear");
        pila->display(pila, cont);
      }break;

      case 2:{
        cont--;
        pila->pop(pila);
        system("clear");
        pila->display(pila, cont);
      }break;

      case 0:opc=0;break;
      default:cout << "\nOpcion no disponible" << '\n';
    }
  } while(opc!=0);
}