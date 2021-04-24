#include "PilaD.h"
#include <cstdlib>
/* Menu para la terminal
int menu(){
  int opc;
  cout <<"\n\n1.- Push"
         "\n2.- Pop"
         "\n0.- Salir"<<endl;
  cin>>opc;
  return opc;
}*/

int main(){
  initscr();
  GUI graph;
  Nodo *pila = NULL;
  int value, dat, cont=0, opc=1;
  do {
    pila->vacia(cont);
    switch (graph.menu()) {
      case 1:{
        cont++;
        scanw("%d",&dat);
        pila->push(pila, dat);
        clear();//system("clear");
        pila->display(pila, cont);
      }break;

      case 2:{
        cont--;
        pila->pop(pila);
        clear();//system("clear");
        pila->display(pila, cont);
      }break;

      case 3:opc=3;break;
      default:break;
    }
  } while(opc!=3);
  endwin();
}