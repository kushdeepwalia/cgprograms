#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm," ");
 putpixel(400,200,RED);
 getch();
 closegraph();
 return 0;
}
