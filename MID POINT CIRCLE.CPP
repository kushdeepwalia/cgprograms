#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void draw_circle(int xc,int yc,int x,int y)
{
    putpixel(xc+x,yc+y,WHITE);
    putpixel(xc-x,yc+y,WHITE);
    putpixel(xc+x,yc-y,WHITE);
    putpixel(xc-x,yc-y,WHITE);
    putpixel(xc+y,yc+x,WHITE);
    putpixel(xc-y,yc+x,WHITE);
    putpixel(xc+y,yc-x,WHITE);
    putpixel(xc-y,yc-x,WHITE);
}
void bres_circle(int xc,int yc,int r)
{
    int x=0,y=r;
    int p=1-r;
    while(x<=y)
    {
        draw_circle(xc,yc,x,y);
        x++;
        if(p>=0)
        {
            y--;
            p+=2*(x-y)+5;
        }
        else
            p+=2*x+3;
    }
}
int main()
{
    int xc,yc,r,gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    printf("\n Enter the center of the circle");
    scanf("%d%d",&xc,&yc);
    printf("\n Enter the radius");
    scanf("%d",&r);
    bres_circle(xc,yc,r);
    getch();
    closegraph();
    return 0;
}
