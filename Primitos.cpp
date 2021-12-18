/*Programa que demuestra si n es numero primo*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main()
{
int n, i, c=0;
printf("\nRecordar que un numero primo es divisible solo entre si mismo y el numero 1");
printf("\nIntroduce el numero");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
    if(n%i==0)
        c++;
}
if(c==2)
    printf("\nEs numero primo!");
    else
    printf("\nNo es numero primo!");
    printf("\nBye!");
    getch();
}







