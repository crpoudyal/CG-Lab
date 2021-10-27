#include <graphics.h>
#include <conio.h>

int main(){
    int gd = DETECT,gm;
    initgraphic(&gd,&gm," ");
    
    outtext("Hello its graphic program");

    getch();
    closegraph();

    return 0;
}