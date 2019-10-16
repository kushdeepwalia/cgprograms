#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int x1,x2,y1,y2,tx,ty,gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    printf("\n Enter max coordinates for rectangle ");
    scanf("%d%d",&x2,&y2);
    printf("\n Enter min coordinates for rectangle ");
    scanf("%d%d",&x1,&y1);
    rectangle(x1,y1,x2,y2);
    printf("\n Enter translating factor ");
    scanf("%d%d",&tx,&ty);
    rectangle(x1+tx,y1+ty,x2+tx,y2+tx);
    getch();
    closegraph();
    return 0;
}
