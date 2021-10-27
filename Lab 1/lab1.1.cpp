#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraphic(&gd, &gm, " ");

    outtextxy(200, 200, "graphic program");

    getch();
    closegraph();

    return 0;
}