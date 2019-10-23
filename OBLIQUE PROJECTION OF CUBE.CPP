#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void cube(int x[],int y[])
{
    line(x[1],y[1],x[0],y[0]);
    line(x[1],y[1],x[2],y[2]);
    line(x[2],y[2],x[3],y[3]);
    line(x[0],y[0],x[3],y[3]);
    line(x[5],y[5],x[4],y[4]);
    line(x[5],y[5],x[6],y[6]);
    line(x[6],y[6],x[7],y[7]);
    line(x[4],y[4],x[7],y[7]);
    line(x[4],y[4],x[0],y[0]);
    line(x[7],y[7],x[3],y[3]);
    line(x[5],y[5],x[1],y[1]);
    line(x[6],y[6],x[2],y[2]);
}
int main()
{
    int x[10],y[10],z[10],xp[10],yp[10];
    int gm,gd=DETECT,a,b,c,i,j;
    initgraph(&gd,&gm,"");
    printf("\n Enter the coordinates of cube : ");
    for(i=0;i<8;i++)
        scanf("%d%d%d",&x[i],&y[i],&z[i]);
    cube(x,y);
    printf("\n Enter the coordinates for the projection : ");
    scanf("%d%d%d",&a,&b,&c);
    for(j=0;j<8;j++)
    {
        xp[j]=x[j]-(a*z[j]/c);
        yp[j]=y[j]-(b*z[j]/c);
    }
    cube(xp,yp);
    getch();
    closegraph();
    return 0;
}
