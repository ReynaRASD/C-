#include <stdio.h>
#include <stdlib.h>

#define MAX 100
int main(int argc, char *argv[])
{
int n,m,k,l,i,j,r;
double a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
do
{

    printf("Dada una matriz A de dimensiones NxM y una matriz B de dimensiones KxL, \ncalcular la multiplicación de ambas matrices.  \nLas matrices A y B deben pasarse como parámetros \nde la función que realiza la multiplicación de ambas. \n");

    printf("\n\nIntroduca las filas (n) y columnas (m) de la matriz a:\n");
do
{
printf("Introdusca n   (0<n<=%d):\n",MAX);
scanf("%d",&n);
}while( (n<=0) || (n>MAX) );
do
{
    printf("Introdusca m   (o<m<=%d):\n",MAX);
    scanf("%d", &m);
}while( (m<=0) || (m>MAX) );
    printf("\nIntrodusca las filas (k) y columnas (l) de la matriz b:\n");
    printf("\n(recuerde que k debe ser igual a m=%d)\n",m);
    do{
    printf("Introdusca k  (0<k<=%d):\n",MAX);
    scanf("%d",&k);
    }while( (k<=0) || (k>MAX) );
    do
    {
        printf("Introdusca l  (0<l<=%d:\n",MAX);
        scanf("%d",&l);
    }while( (l<=0) || (l>MAX));
}while(m!=k);
printf("\nIntrodusca la matriz a:\n");
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        printf("\tIntrodusca a[%d][%d]:",i,j);
        scanf("%lf", &(a[i][j]));
    }
    printf("\n");
}
printf("\nIntrodusca la matriz b:\n");
for(i=0;i<k;i++)
{
    for(j=0;j<l;j++)
    {
        printf("\tIntrodusca b[%d][%d]:",i,j);
        scanf("%lf", &(b[i][j]));
    }
    printf("\n");
}
for(i=0;i<n;i++)
{
    for(j=0;j<l;j++)
    {
        c[i][j]=0;
        for(r=0;r<m;r++)
        {
            c[i][j]=c[i][j]+a[i][j]*b[r][j];
        }
    }
    printf("\n");
}
printf("El producto de ambas matrices es:\n");
for(i=0;i<n;i++)
{
    for(j=0;j<l;j++)
    {
        printf("\tc[%d][%d]=%f",i,j,c[i][j]);
    }
    printf("\n");
}
printf("\n\n\n");
  printf("\n Gracias por usar el programa!");
    printf("\n");
    system("pause");
    return 0;
}




