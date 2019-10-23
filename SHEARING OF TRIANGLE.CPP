#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int a,b,i,j,gd=DETECT,gm,p[3][3],q[3][3],r[3][3],sum=0,k;
    initgraph(&gd,&gm,"");
    printf("\n Enter triangle matrix ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&p[i][j]);
        }
        p[i][2]=1;
    }
    line(p[0][0],p[0][1],p[1][0],p[1][1]);
    line(p[0][0],p[0][1],p[2][0],p[2][1]);
    line(p[1][0],p[1][1],p[2][0],p[2][1]);
    printf("\n Enter Shearing Factor ");
    scanf("%d%d",&a,&b);
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            if(i!=j)
                q[i][j]=0;
            else
                q[i][j]=1;
    q[0][1]=b;
    q[1][0]=a;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
                sum+=p[i][k]*q[k][j];
            r[i][j]=sum;
        }
    printf("\n Entered Triangle is sheared ");
    line(r[0][0],r[0][1],r[1][0],r[1][1]);
    line(r[0][0],r[0][1],r[2][0],r[2][1]);
    line(r[1][0],r[1][1],r[2][0],r[2][1]);
    getch();
    closegraph();
    return 0;
}
