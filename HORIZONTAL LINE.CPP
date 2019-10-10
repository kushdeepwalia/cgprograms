#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
 int i,gd=DETECT,gm;
 initgraph(&gd,&gm," ");
 for(i=100;i<200;i++)
  putpixel(i,200,RED);
 getch();
 closegraph();
 return 0;
}
