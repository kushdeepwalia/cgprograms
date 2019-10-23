#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,j,gd=DETECT,gm,sum=0,k;
    float angle,q,a[3][3],b[3][3],c[3][3],d[3][3],e[3][3],f[3][3],mm[3][3];
    initgraph(&gd,&gm,"");
    printf("\n Enter triangle matrix ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%f",&a[i][j]);
        }
        a[i][2]=1;
    }
    line(a[0][0],a[0][1],a[1][0],a[1][1]);
    line(a[0][0],a[0][1],a[2][0],a[2][1]);
    line(a[1][0],a[1][1],a[2][0],a[2][1]);
    printf("\n Enter Rotation Angle ");
    scanf("%f",&angle);
    q=(angle*3.14)/180;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            if(i!=j)
                b[i][j]=0;
            else
                b[i][j]=1;
    b[2][0]=-a[0][0];
    b[2][1]=-a[0][1];
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            c[i][j]=0;
    c[0][0]=cos(q);
    c[0][1]=sin(q);
    c[1][0]=-sin(q);
    c[1][1]=cos(q);
    c[2][2]=1;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            if(i!=j)
                d[i][j]=0;
            else
                d[i][j]=1;
    d[2][0]=a[0][0];
    d[2][1]=a[0][1];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
                sum+=a[i][k]*b[k][j];
            e[i][j]=sum;
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
                sum+=e[i][k]*c[k][j];
            f[i][j]=sum;
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
                sum+=f[i][k]*d[k][j];
            mm[i][j]=sum;
        }
    }
    printf("\n Entered Triangle is rotated ");
    line(mm[0][0],mm[0][1],mm[1][0],mm[1][1]);
    line(mm[0][0],mm[0][1],mm[2][0],mm[2][1]);
    line(mm[1][0],mm[1][1],mm[2][0],mm[2][1]);
    getch();
    closegraph();
    return 0;
}
