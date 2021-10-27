#include <graphics.h>
#include <conio.h>

int main(){
    int gd = DETECT,gm;
    initgraphic(&gd,&gm," ");
    
    //Changing drawing color
    setcolor("RED");

    //change background color
    setbkcolor("GREEN");

    getch();
    closegraph();

    return 0;
}