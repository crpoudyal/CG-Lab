
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

float Round(float v)
{
    if (v - int(v) < 0.5)
    {
        return v;
    }
    else
    {
        return (v + 0.5);
    }
}

void DDA(float x, float y, float xinc, float yinc, float s)
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    printf("k\t\tx\t\tx\t\ty\t\ty\n");

    putpixel(int(x), int(y), RED);
    printf("%d\t\t%0.2f\t\t%0.2f\t\t%d\t\t%d\n", 0, x, y, int(Round(x)), int(Round(y)));
    for (int i = 0; i < int(s); i++)
    {
        x = x + xinc;
        y = y + yinc;
        printf("%d\t\t%0.2f\t\t%0.2f\t\t%d\t\t%d\n", 0, x, y, int(Round(x)), int(Round(y)));
        putpixel(int(Round(x)), int(Round(y)), RED);
    }
}
int main()
{

    float x1, y1, x2, y2;
    int dx, dy;
    float step_length;
    float xinc, yinc;

    printf("Enter the initial points(x,y):\n");
    scanf("%f%f", &x1, &y1);

    printf("Enter the target points)(x,y):\n");
    scanf("%f%f", &x2, &y2);

    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > (dy))
    {
        step_length = abs(dx);
    }
    else
    {
        step_length = abs(dy);
    }

    xinc = dx / step_length;
    yinc = dy / step_length;

    DDA(x1, y1, xinc, yinc, step_length);

    getch();
    closegraph();
    return 0;
}