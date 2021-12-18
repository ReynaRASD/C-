#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int i=1, sum=0, u=20;
void Mult(void);
main()
{
printf("\nEste programa realiza la sumatoria de los numeros enteros multiplos de 5, \ncomprendidos entre el 1 y el 100, es decir, 5 + 10 + 15 +...+ 100. \nEl programa debera imprimir los numeros en cuestion \ny finalmente su sumatoria\n");
system("\n\npause\n");
printf("\nMultiplos de 5:\n");
system("\n\npause\n");
Mult();
printf("\nGracias!\n");

system("\n\npause\n");
}

void Mult(void)
{
for(i=1;i<=100;i++)
{
    if(i%5==0)
   printf("\nNumero %d",i);
sum=(u*u*5+u*5)/2;
}
printf("\n\nLa sumatoria de los multiplos de 5 son: %d\n",sum);
}
