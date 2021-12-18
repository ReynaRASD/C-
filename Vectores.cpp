#include<stdio.h>
#include<stdlib.h>
main()
{
int TAM;
printf("\t\t Suma de Vectores \n");
printf("Ingrese el numero de componentes de los vectores: \t");
scanf("%d", &TAM);
int a [TAM];
int b [TAM];
int s [TAM];
int i, t1, t2;
for(i=0;i<TAM;i++)
{
	printf("\n Ingrese el valor a [%d] del vector a:\t",i);
	scanf("%d", &a[i]);
	printf("\n Ingrese el valor b [%d] del vector b:\t",i);
	scanf("%d", &b[i]);
	s[i]=a[i]+b[i];
//	printf("\n La suma de a[%d]+b[%d] es:\t",i,i);
}for(i=0;i<TAM;i++)
	printf(" Las componentes del vector resultante son: %d  \n",s[i]);
//	printf("\n El vector resultante de la suma del vector a y b tiene por componentes:\t",s[i]);

system("pause");
}
