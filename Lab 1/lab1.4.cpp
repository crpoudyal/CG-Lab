#include <graphics.h>
#include <conio.h>

int main(){
    int gd = DETECT,gm;
    initgraphic(&gd,&gm," ");
    
// Drawing circle
    circle(400,300,50);

    getch();
    closegraph();

    return 0;
}