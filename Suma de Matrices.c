#include<stdio.h>
#include<stdlib.h>
main()
{
// Validacion de dimensiones RxC
int R,C; // Dimensiones
int r,c; // Indices
system("cls");
printf("\t\t Suma de Matrices \n");
do
{
printf("\n Introdusca el numero de renglones (R) de la matriz A y B: ");
scanf("%d",&R);
printf("\n Introdusca el numero de columnas (C) de la matriz A y B: ");
scanf("%d",&C);
if(R!=C)
{
printf("\n El valor de R debe ser igual al de C para que se pueda hacer la suma \n\n");
if(R==0) { printf("\n Introdusca valores de R mayores a 0 \n\n"); system("pause"); system("cls"); }
if(C==0) { printf("\n Introdusca valores de C mayores a 0 \n\n"); system("pause"); system("cls"); }
}
if((R==0)&&(C==0)) { printf("\n Introdusca valores de R y C mayores a 0 \n\n"); system("pause"); system("cls"); }
}while((R!=C)||(R==0)||(C==0));
// Declaramos una matriz A
int A[R][C];
// Declaramos una matriz B
int B[R][C];
// Declaramos una matriz resultado
int S[R][C];
system("cls");
// Ingreso de valores en ambas matrices A,B
for(r = 0; r<R; r++)
for(c = 0; c<C; c++)
{
printf("\n Introdusca el valor del elemento A[%d][%d]: ",r,c);
scanf("%d",&A[r][c]);
printf("\n Introdusca el valor del elemento B[%d][%d]: ",r,c);
scanf("%d",&B[r][c]);
system("cls");
}
// Despliegue de valores capturados en forma de matriz
// Para A
printf("Matriz A: \n");
for(r = 0; r<R; r++)
{
for(c = 0; c<C; c++)
{
printf("%d",A[r][c]);
printf("\t");
}
printf("\n");
}
printf("\n");
// Para B
printf("Matriz B: \n");
for(r = 0; r<R; r++)
{
for(c = 0; c<C; c++)
{
printf("%d",A[r][c]);
printf("\t");
}
printf("\n");
}
printf("\n");
// EL resultado de la suma de A y B
for(r = 0; r < R; r++)
for(c = 0; c < C; c++)
S[r][c] = A[r][c] + B[r][c];
// Despliegue de resultado en forma de matriz
printf("La suma de A + B es: \n");
for(r = 0; r<R; r++)
{
for(c = 0; c<C; c++)
{
printf("%d",S[r][c]);
printf("\t");
}
printf("\n");
}
printf("\n");
system("pause");
}
