#include <graphics.h>
#include <conio.h>

int main(){
    int gd = DETECT,gm;
    initgraphic(&gd,&gm," ");
// Drawing Rectangle  
    rectangle(100,200,400,500);

    getch();
    closegraph();

    return 0;
}