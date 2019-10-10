#include<stdio.h>
#include<graphics.h>
void bresenham_line (int xa,int ya,int xb,int yb)
{
    int x = xa, y = ya;
    int dx = xb-xa, dy = yb-ya;
    if ( dy/dx < 1)
    {
        int dT = 2*(dy-dx), dS = 2*dy;
        int d = 2*dy-dx;
        putpixel(x,y,WHITE);
        while(x<xb)
        {
            x++;
            if (d<0)
                d = d+dS;
            else
            {
                y++;
                d=d+dT;
            }
            putpixel(x,y,WHITE);
        }
    }
    else
    {
        int dT = 2*(dx-dy), dS = 2*dx;
        int d = 2*dx-dy;
        putpixel(x,y,WHITE);
        while(y<yb )
        {
            y++;
            if (d<0)
                d = d+dS;
            else
            {
                x++;
                d=d+dT;
            }
            putpixel(x,y,WHITE);
        }
    }
}
int main()
{
    int xa, ya, xb, yb;
    int gd=DETECT, gm;
    printf("\n Enter the coordinates of initial point : ");
    scanf("%d%d", &xa, &ya);
    printf("\n Enter the coordinates of final point : ");
    scanf("%d%d", &xb, &yb);
    initgraph(&gd, &gm,"");
    bresenham_line(xa, ya, xb, yb);
    getch();
    closegraph();
    return 0;
}
