#include <stdio.h>
#include <stdlib.h>
main()
{
int G,L,D;
	printf("ALGORITMO PARA VERIFICAR NUMEROS DIVISIBLES");
	printf("Ingrese numero A:");
	scanf("%d",&G);
	printf("Ingrese numero B:");
	scanf("%d",&L);
	if ( G==0,L==0 )
		printf("'EL RESULTADO NO EXISTE");
	if (L==0)
		printf("EL RESULTADO ES INFINITO");
	D=G/L;
	printf("EL NUMERO ES DIVISIBLE",D );
	system ("pause");
     return 0;
	}
