/*
  Name: Archivo principal que llama las funciones de la libreria smat.h
  para sumar matrices
  Copyright: UNAM FI
  Author: Manuel C
  Date: 20/10/14 15:57
  Description: Este archivo llama las funciones necesarias para realizar la 
  suma de dos matrices de NxN
*/
//_____________________________________________________________________________

// Se incluyen librerias necesarias
#include<stdio.h>
#include<stdlib.h>
//_____________________________________________________________________________

// Se define una dimension maxima para las matrices
#define MAX 20
//_____________________________________________________________________________

// Se incluye la libreria smat.h entre comilla doble
#include "smat.h"
//_____________________________________________________________________________



// Se hace una declaracion de variables globales
int R=0,C=0; // Dimensiones
int r=0,c=0; // Indices

// Declaramos una matriz A, B y S(resultado de la suma)
int A[MAX][MAX], B[MAX][MAX], S[MAX][MAX];
//_____________________________________________________________________________

main()
{
  // Llamada a la funcion validacion(int R, int C)
  R = validacion(R,C);
  C = R;
  
  // Llamada a la funcion captura(int A[][MAX], int B[][MAX], int R, int C, int r, int c)
  captura(A,B,R,C,r,c);
 
  // Llamada a la funcion despliegue(int M[][MAX], int R, int C, int r, int c)
  printf("MATRIZ A: \n");
  despliegue(A,R,C,r,c);

  printf("MATRIZ B: \n");
  despliegue(B,R,C,r,c);
  
  // Llamada a la funcion suma(int A[][MAX], int B[][MAX], int S[][MAX], int R, int C, int r, int c)
  suma(A,B,S,R,C,r,c);
  
  printf("LA SUMA DE A + B ES: \n");
  despliegue(S,R,C,r,c);
  
  printf("\n");
  system("pause"); 
}


