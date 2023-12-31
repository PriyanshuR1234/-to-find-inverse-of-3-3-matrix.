#include<stdio.h>
#include<math.h>
void main()
{
int a[5][5],c,i,j,d;
float b[5][5],e;
printf("enter the matrix :");
for (i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
scanf("%d",&a[i][j]);
}
}
c=a[1][3]*a[2][1]*a[3][2]+a[1][1]*a[2][2]*a[3][3]+a[1][2]*a[2][3]*a[3][1];
d=a[1][2]*a[2][1]*a[3][3]+a[1][3]*a[2][2]*a[3][1]+a[1][1]*a[2][3]*a[3][2];
e=c-d;
printf("determinant of above matrix is : %.0f\n",e);
b[1][1]=a[2][2]*a[3][3]-a[2][3]*a[3][2];
b[1][2]=-(a[1][2]*a[3][3]-a[1][3]*a[3][2]);
b[1][3]=a[1][2]*a[2][3]-a[1][3]*a[2][2];
b[2][1]=-(a[2][1]*a[3][3]-a[2][3]*a[3][1]);
b[2][2]=a[1][1]*a[3][3]-a[1][3]*a[3][1];
b[2][3]=-(a[1][1]*a[2][3]-a[1][3]*a[2][1]);
b[3][1]=a[2][1]*a[3][2]-a[2][2]*a[3][1];
b[3][2]=-(a[1][1]*a[3][2]-a[1][2]*a[3][1]);
b[3][3]=a[1][1]*a[2][2]-a[1][2]*a[2][1];
printf(" adjoint of matrix A i.e adj(A) :\n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
printf("%.0f\t",b[i][j]);
}
printf("\n");
}
printf(" \n A inverse is :\n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
printf("%f\t",b[i][j]);
}
printf("\n");
}
}
