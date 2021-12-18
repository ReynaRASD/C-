#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define R 2
#define F 4

main()
{
      int  A,B,C;
      float X1,X2;
      printf("\n Calculo de las soluciones de un polinomio de segundo grado Ax^2+Bx+C\n");
      printf("\n Ingresa el valor de A");
      scanf("%d",&A);
      printf("\n Ingresa el valor de B");
      scanf("%d",&B);
      printf("\n Ingresa el valor de C");
      scanf("%d",&C);

      X1=(-B+(sqrt(B*B-F*A*C)))/R*A;
      X2=(-B-(sqrt(B*B-F*A*C)))/R*A;

      printf("\n El valor de X1 es: %.3f",X1);
      printf("\n El valor de X2 es: %.3f",X2);

      system("pause");
 }
