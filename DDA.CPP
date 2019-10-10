#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#define ROUND(a)((int)(a+0.5))
int DDA(int xa,int xb,int ya,int yb)
{
 int dx=xb-xa,dy=yb-ya,steps,k;
 float xin,yin,x=xa,y=ya;
 if(abs(dx)>abs(dy))
  steps=abs(dx);
 else
  steps=abs(dy);
 xin=dx/steps;
 yin=dy/steps;
 putpixel(ROUND(x),ROUND(y),WHITE);
 for(k=0;k<steps;k++)
 {
  x=x+xin;
  y=x+yin;
  putpixel(ROUND(x),ROUND(y),WHITE);
 }
 getch();
 return 0;
}
int main()
{
 int gd=DETECT,gm,xa,xb,ya,yb;

 printf("\n Enter initial coordinates");
 scanf("%d%d",&xa,&ya);
 printf("\n Enter final coordinates");
 scanf("%d%d",&xb,&yb);
 initgraph(&gd,&gm," ");
 DDA(xa,xb,ya,yb);
 return 0;
}
