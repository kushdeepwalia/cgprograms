#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int a1,a2,a3,a4,b1,b2,b3,b4;
int sign(int a)
{
    if(a<0)
        return 0;
    else
        return 1;
}
void region_code(int x1,int x2,int y1,int y2,int xmax,int xmin,int ymax,int ymin)
{
    a1=sign(y1-ymax);
    a2=sign(ymin-y1);
    a3=sign(x1-xmax);
    a4=sign(xmin-x1);
    b1=sign(y2-ymax);
    b2=sign(ymin-y2);
    b3=sign(x2-xmax);
    b4=sign(xmin-x2);
}
void deciding()
{
    if(a1==0 && a2==0 && a3==0 && a4==0 && b1==0 && b2==0 && b3==0 && b4==0)
        printf("\n Line is completely inside ");
    else if(((a1&b1) || (a2&b2) || (a3&b3) || (a4&b4))==0)
        printf("\n Line is eligible for clipping ");
    else
        printf("\n Line is complete outside ");
}
void clip(int x1,int x2,int y1,int y2,int xmax,int xmin,int ymax,int ymin)
{
    rectangle(xmin,ymin,xmax,ymax);
    line(x1,y1,x2,y2);
    region_code(x1,y1,x2,y2,xmax,xmin,ymax,ymin);
    deciding();
}
int main()
{
    int x1,y1,x2,y2,xmax,xmin,ymax,ymin,gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    printf("\n Enter the max coordinates of the window ");
    scanf("%d%d",&xmax,&ymax);
    printf("\n Enter the min coordinates of the window ");
    scanf("%d%d",&xmin,&ymin);
    printf("\n Enter the coordinates of the point 1 ");
    scanf("%d%d",&x1,&y1);
    printf("\n Enter the coordinates of the point 2 ");
    scanf("%d%d",&x2,&y2);
    clip(x1,y1,x2,y2,xmax,xmin,ymax,ymin);
    getch();
    closegraph();
    return 0;
}
