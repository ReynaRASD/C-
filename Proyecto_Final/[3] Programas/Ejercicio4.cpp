#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,e;
system("cls");
    printf("Algoritmo para leer 5 numeros e imprimir solo los pares\n");
    printf("Introduce el primer numero\n");
    scanf("%d", &a);
    printf("Introduce el segundo numero\n");
    scanf("%d", &b);
    printf("Introduce el tercer numero\n");
    scanf("%d", &c);
    printf("Introduce el cuarto numero\n");
    scanf("%d", &d);
    printf("Introduce el quinto numero\n");
    scanf("%d", &e);
    if (a % 2==0)
    {
    printf("EL NUMERO:%.2d\n", a);
    printf("ES PAR \n");
    }
    else{
    printf("");
    }
    if (b % 2==0)
    {
    printf("EL NUMERO:%.2d\n", b);
    printf("ES PAR \n");
    }
    else{
    printf("");
    }
    if (c % 2==0)
    {
    printf("EL NUMERO:%.2d\n", c);
    printf("ES PAR\n ");
    }
    else{
    printf("");
    }
    if (d % 2==0)
    {
    printf("EL NUMERO:%.2d\n" ,d);
    printf("ES PAR\n ");
    }
    else{
    printf("");
    }
    if (e % 2==0)
    {
    printf("EL NUMERO:%.2d\n", e);
    printf("ES PAR\n ");
    }
    else{
    printf("");
    }


    system("pause");
}

