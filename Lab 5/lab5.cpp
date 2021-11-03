// To implement flood fill algorithm
#include <graphics.h>
#include <conio.h>
#include <stdio.h>

void FloodFill_8c(int x, int y, int o_color, int f_color)
{
    int val = getpixel(x, y);
    if (val != f_color)
    {
        putpixel(x, y, f_color);
        FloodFill_8c(x, y + 1, o_color, f_color);
        FloodFill_8c(x + 1, y + 1, o_color, f_color);
        FloodFill_8c(x - 1, y + 1, o_color, f_color);
        FloodFill_8c(x + 1, y, o_color, f_color);
        FloodFill_8c(x + 1, y, o_color, f_color);
        FloodFill_8c(x + 1, y - 1, o_color, f_color);
        FloodFill_8c(x, y - 1, o_color, f_color);
        FloodFill_8c(x - 1, y - 1, o_color, f_color);
    }
}

int main()
{
    int arr[] = {10, 10, 100, 200, 100, 300, 50, 270, 10, 10};
    int gd = DETECT, gm;
    intigraph(&gd, &gm, "");
    drawpoly(5, arr);

    int x = 15;
    int y = 25;
    int o_color = BLACK;
    int f_color = RED;

    FloodFill_8c(x, y, o_color, f_color);

    getch();
    return 0;
}