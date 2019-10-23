#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int main()
{
    int gd=DETECT,gm,x[4],y[4],xu,yu,i;
    float u;
    initgraph(&gd,&gm,"");
    printf("\n Enter 4 Control points ");
    for(i=0; i<4; i++)
        scanf("%d%d",&x[i],&y[i]);
    printf("\n Curve is: ");
    for(u=0.0;u<1.0;u+=0.005)
    {
        xu=x[0]*pow(1-u,3)+3*u*pow(1-u,2)*x[1]+3*pow(u,2)*(1-u)*x[2]+x[3];
        yu=y[0]*pow(1-u,3)+3*u*pow(1-u,2)*y[1]+3*pow(u,2)*(1-u)*y[2]+y[3];
        putpixel(xu,yu,WHITE);
    }
    getch();
    closegraph();
    return 0;
}
