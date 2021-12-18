#include<conio.h>
#include<stdio.h>
#include <stdlib.h>
main()
{
    printf("\n QUE TIPO DE TRIANGULO ES?!");
 float a,b,c;
 printf("\nIngresara las longitudes del triangulo cuando se le pida \n");
 printf("\n\nValor del primer lado: ");
 scanf("%f",&a);
 printf("\nValor del segundo lado: ");
 scanf("%f",&b);
 printf("\nValor del tercer lado: ");
 scanf("%f",&c);
 if((a==b) && (b==c) && (a==c))
 printf("\n\nEl triangulo es: equilatero");
 else if((a!=b) && (b!=c) && (a!=c))
 printf("\n\nEl triangulo es: escaleno");
 else
 printf("\n\nEl triangulo es: isoceles");
 printf("\n\n\n");
printf("\n Gracias por usar el programa!");
getch();
 return 0;
}
