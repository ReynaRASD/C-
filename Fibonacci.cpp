/*Programa de Fibonacci*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
int contador, numero1,numero2,numero3,n,l,ret;
printf("\nCon que numero quieres iniciar la serie?");
scanf ("%i",&l);
printf("\nHasta que numero de la serie de Fibonacci deseas?");
scanf ("%d",&n);
numero1=1;
   numero2=l;
   printf("\n%i",numero2);

   do{
   numero3=numero1+numero2;
   printf("\n%i",numero3);
   numero1=numero2;
   numero2=numero3;


   }while(numero3<n);

    printf("\nGracias! Hasta luego.");

   getch();
   return 0;
}
