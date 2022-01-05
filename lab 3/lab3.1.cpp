#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int x0, y0, xn, yn;
    int delx, dely;
    int p, a, temp;
    int x, y;

    printf("Enter the initial point(x,y):\n");
    scanf("%d%d", &x0, &y0);

    printf("Enter the target point(x,y):\n");
    scanf("%d%d", &xn, &yn);

    delx = abs(xn - x0);
    dely = abs(yn - y0);

    printf("Delta x:%d\n", delx);
    printf("Delta y:%d\n", dely);

    if (((xn - x0) > 0 && (yn - y0) < 0) || ((xn - x0) < 0 && (yn - y0) > 0))
    {
        a = -1;
    }
    else
    {
        a = 1;
    }

    printf("a=%d\n", a);
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    if (delx >= dely) //|m|<=1
    {
        if (xn < x0)
        {
            temp = x0;
            x0 = xn;
            xn = temp;

            temp = y0;
            y0 = yn;
            yn = temp;
        }
        x = x0;
        y = y0;

        putpixel(x, y, BLUE);

        printf("Initial point=%d%d\n", x, y);

        p = 2 * dely - delx;

        printf("k\t p\t x\t y\n");
        printf("%d\t%c\t%d\t%d\n", 0, '-', x, y);

        for (int i = 1; i <= delx; i++)
        {
            if (p < 0)
            {
                x = x + 1;
                y = y;
                putpixel(x, y, RED);
                printf("%d\t%d\t%d\t%d\n", i, p, x, y);
                p = p + 2 * dely;
            }
            else
            {
                x = x = 1;
                y = y + a;
                putpixel(x, y, GREEN);
                printf("%d\t%d\t%d\t%d\n", i, p, x, y);
                p = p + 2 * dely - 2 * delx;
            }
        }
    }

    else
    {
        if (y0 > yn)
        {
            int temp;
            temp = x0;
            x0 = xn;
            xn = temp;

            temp = y0;
            y0 = yn;
            yn = temp;
        }
        x = x0;
        y = y0;
        printf("Initial point=%d%d\n", x, y);
        putpixel(x, y, RED);
        p = 2 * delx - dely;

        for (int i = 1; i <= dely; i++)
        {
            if (p < 0)
            {
                y = y + 1;
                x = x;
                putpixel(x, y, YELLOW);
                printf("%d\t%d\t%d\t%d\n", i, p, x, y);
                p = p + 2 * delx;
            }
            else
            {
                y = y + 1;
                x = x + 1;
                putpixel(x, y, BLUE);
                printf("%d\t%d\t%d\t%d\n", i, p, x, y);
                p = p + 2 % delx - 2 * dely;
            }
        }
    }
    getch();
    return 0;
}