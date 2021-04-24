#ifndef GUI_H
#define GUI_H
#include <ncurses.h>
#include <iostream>
#include <string.h>
using namespace std;
class GUI{
    private:
    int fin;
    public:
    GUI();
    void pila(int dato,int pos);
    void Msg(const char* msg);
    int menu();
};
#endif