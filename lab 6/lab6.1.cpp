#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;

    int xc = 100, yc = 100, r = 10;
    int x1 = 2330, y1 = 200, x2 = 200, y2 = 900;

    initgraph(&gd, &gm, "");

    setfillstyle(8, RED);

    circle(xc, yc, r);

    floodfill(xc, yc, 15);

    for (int i = 0; i < 600; i++)
    {
        cleardevice();
        circle(xc + i, yc + i, 10);
        floodfill(xc + i, yc + i, 15);
        delay(10);
    }
    line(x1, y1, x2, y2);

    for (int i = 0; i < 600; i++)
    {
        xc = 700;
        yc = 700;
        circle(xc - i, yc - i, 10);
        floodfill(xc - i, yc - i, 15);
        delay(10);
        cleardevice();
    }
    getch();
    return 0;
}