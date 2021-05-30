#include <stdio.h>
#include <dos.h>
#include <graphics.h>


void drawCircle(int xc, int yc, int x, int y)
{
    putpixel(xc+x, yc+y, WHITE);

    putpixel(xc-x, yc+y, WHITE);

    putpixel(xc+x, yc-y, WHITE);

    putpixel(xc-x, yc-y, WHITE);

    putpixel(xc+y, yc+x, WHITE);

    putpixel(xc-y, yc+x, WHITE);

    putpixel(xc+y, yc-x, WHITE);

    putpixel(xc-y, yc-x, WHITE);
}
void circleBres(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    drawCircle(xc, yc, x, y);
    while (y >= x)
    {

        x++;


        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        drawCircle(xc, yc, x, y);
        delay(50);
    }
}

int main()
{
    int x=300 , y=300, r2=50;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");  // initialize graph
    circleBres(x, y, r2);    // function call
    return 0;
}
