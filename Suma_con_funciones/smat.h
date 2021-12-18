/*
  Name: Archivo Header que contiene las funciones para sumar matrices
  Copyright: UNAM FI
  Author: Manuel C
  Date: 20/10/14 15:57
  Description: Este archivo contiene las funciones necesarias para realizar la 
  suma de dos matrices de NxN
*/
//_____________________________________________________________________________

// Se incluyen librerias necesarias

#include<stdio.h>
#include<stdlib.h>
//_____________________________________________________________________________

// Funcion validar datos

int validacion(int R, int C)
{
 // Validacion de dimensiones RxC (R = renglones, C = columnas)
      system("cls");
      printf("\t\t +++ SUMA DE MATRICES +++ \n");
         
      do
      {
       printf("\n Ingrese el numero de renglones R de la matriz A y B: ");
       scanf("%d",&R);
       printf("\n Ingrese el numero de columnas C de la matriz A y B: ");
       scanf("%d",&C);
       if(R!=C) 
         {
           printf("\n El valor de R debe ser igual al de C \n\n"); system("pause"); system("cls");
           if(R==0) { printf("\n Ingrese valores de R mayores a 0 \n\n"); system("pause"); system("cls"); }
           if(C==0) { printf("\n Ingrese valores de C mayores a 0 \n\n"); system("pause"); system("cls"); }
          }
       
       if((R==0)&&(C==0)) { printf("\n Ingrese valores de R y C mayores a 0 \n\n"); system("pause"); system("cls"); }
       
       }while((R!=C)||(R==0)||(C==0));
       return R;
}
//_____________________________________________________________________________

// Funcion de captura de datos

int captura(int A[][MAX], int B[][MAX], int R, int C, int r, int c)
{
  // Ingreso de valores en ambas matrices A,B
   for(r = 0; r<R; r++)
      for(c = 0; c<C; c++)
         {
           printf("\n Ingrese el valor del elemento A[%d][%d]: ",r,c);
           scanf("%d",&A[r][c]);
           printf("\n Ingrese el valor del elemento B[%d][%d]: ",r,c);
           scanf("%d",&B[r][c]);
           system("cls");
         }
}
//_____________________________________________________________________________

// Funcion despliegue de datos en forma de matriz

int despliegue(int M[][MAX], int R, int C, int r, int c)
{
    for(r = 0; r<R; r++)
        {
          for(c = 0; c<C; c++)
             {
               printf("%d",M[r][c]);
               printf("\t");
             }
          printf("\n");
        }

       printf("\n");
}
//_____________________________________________________________________________

// Funcion suma de matrices A y B

int suma(int A[][MAX], int B[][MAX], int S[][MAX], int R, int C, int r, int c)
{
  for(r = 0; r < R; r++)
     for(c = 0; c < C; c++)
        S[r][c] = A[r][c] + B[r][c];
}

