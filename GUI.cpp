#include "GUI.h"
GUI::GUI(){
    fin=0;
    int dis=0;
}
void GUI::pila(int dato,int post){
    int x,y;
    getmaxyx(stdscr,y,x);
    string c =to_string(dato);
    char const *d =c.c_str();
    WINDOW *pil = newwin(3,strlen(d)+4,0,fin);
    refresh();
    box(pil,0,0);
    if(post==-1)wprintw(pil,"[TOP]");
    else wprintw(pil,"[%d]",post);
    wrefresh(pil);
    mvwprintw(pil,1,2,"%d",dato);
    wrefresh(pil);
    fin+=strlen(d)+4;
    if (fin >= x){
        clear();
        Msg("Pantalla llena !!");
    }
}
void GUI::Msg(const char* msg){
    int x,y;
    getmaxyx(stdscr,y,x);
    WINDOW *ms = newwin(3,strlen(msg)+2,0,(x-strlen(msg))/2);
    refresh();
    box(ms,0,0);
    //wprintw(ms,msg);
    mvwprintw(ms,1,1,msg);
    wrefresh(ms);
}
int GUI::menu(){
    noecho();
    cbreak();
    int y,x,opcin,select=0;
    getmaxyx(stdscr,y,x);
    string opc[3]={"Agregar: ","Remover","salir"};
    WINDOW *m = newwin(5,x-1,3,1);
    box(m,0,0);
    refresh();
    wrefresh(m);
    keypad(m,true);
    while (1){
        for(int i=0; i<3; i++){
            if(i==select)wattron(m, A_REVERSE);
            mvwprintw(m,i+1,1+((x-strlen(opc[i].c_str()))/2),opc[i].c_str());
            wattroff(m, A_REVERSE);
        }
        opcin =wgetch(m);
        switch (opcin)
        {
        case KEY_UP:select--;break;
        case KEY_DOWN:select++;break;
        default:break;
        }
        if(opcin==10)break;
    }
    if(select==0){
        wattroff(m, A_REVERSE);
        move(4,1+((x+strlen(opc[0].c_str()))/2));
        echo();
        nocbreak();
        refresh();
        wrefresh(m);
        keypad(m,false);
    }
    return select+1;
}