#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm," ");
 setcolor(YELLOW);
 circle(300,100,40);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(300,100,YELLOW);
 setcolor(BLACK);
 setfillstyle(SOLID_FILL,BLACK);
 fillellipse(313,90,6,6);
 fillellipse(287,90,6,6);
 arc(300,110,200,340,15);
 getch();
 closegraph();
 return 0;
}
