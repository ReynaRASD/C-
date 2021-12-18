#include<stdio.h>
#include<stdlib.h>
main()
{
	int aprov=0,reprov=0,resul=0, estud=1;
    while (estud<=10)
    {
    	printf("\nIntroducir 10 calificaciones de alumnos, se hara el conteo de cuantos aprobados y cuantos reprobados hay; si el numero es mayor o igual 8 de aprobados, se aumentara la colegiatura");
		
		printf("\nIntrodusca si aprovo con 1 y si reprobo con 2:\n");
    	scanf("%i",&resul);
    	if(resul==1)
    	{
    	printf("\n Aprovado \n",aprov);
    	aprov++;
        }
    	else
     	{
		printf("\n Reprobado \n",reprov);
    	reprov++;
        }
    	estud++;
    }
    printf("\n Numero de estudiantes Aprovados: %i \n",aprov);
    printf("\n Numero de estudiantes Reprovados: %i \n",reprov);
	 if(aprov>=8)
	 	{printf("\n Aumentar colegiatura\n");}
	 else 
	 	{printf("\n No aumenta colegiatura \n");}
	 printf("\n");
	 system("pause");
}
