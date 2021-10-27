#include <graphics.h>
#include <conio.h>

int main(){
    int gd = DETECT,gm;
    initgraphic(&gd,&gm," ");

//Draw pixel with colour RED
    putpixel(300,500,"RED");
    
// line Drawing command
    line(200,100,500,200);

    getch();
    closegraph();

    return 0;
}