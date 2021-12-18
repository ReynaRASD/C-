#include<stdio.h>
#include<stdlib.h>

main ()
{
 	int p;
 	int n;

 	int e=1;
 	int i=1;

 	printf("BIENVENIDO AL ALGORITMO QUE SACA LA N-ESIMA POTENCIA\n");
 	printf("INGRESA EL NUMERO A ELEVAR\n");
 	scanf("%d",&n);
 	printf("INGRESA LA POTENCIA QUE SE ELEVARA(esta debe ser positiva)\n");
 	scanf("%d",&p);

 	while (i<=p)
 	{
 	e=e*n;
	 i++;
 	 }

 	printf ("EL RESULTADO ES:%d ",e);
 	system("pause");
}
