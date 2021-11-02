// To implement boundary fill algorithm

#include <graphics.h>
#include <conio.h>
#include <stdio.h>

void Boundary_Fill4(int x, int y, int b_color, int f_color)
{
    int val = getpixel(x, y);
    if (val != b_color && val != f_color)
    {
        putpixel(x, y, f_color);
        delay(100);
        Boundary_Fill4(x + 1, y, b_color, f_color);
        Boundary_Fill4(x, y - 1, b_color, f_color);
        Boundary_Fill4(x - 1, y, b_color, f_color);
        Boundary_Fill4(x, y + 1, b_color, f_color);
    }
}

int main()
{
    int xc, yc, r;
    int x, y;         // For seed pixel
    int b_color = 15; // White
    int f_color = 4;  // Red
    int gd = DETECT, gm;

    printf("Enter the center of the circle:\n");
    scanf("%d%d", &xc, &yc);
    printf("Enter the redius of circle:\n");
    scanf("%d", &r);
    initgraph(&gd, &gm, "");

    circle(xc, yc, r);
    x = xc;
    y = yc;

    Boundary_Fill4(x, y, b_color, f_color);

    getch();
    return 0;
}