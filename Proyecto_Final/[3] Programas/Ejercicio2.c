#include <stdio.h>
#include <stdlib.h>

main()
{
float N;
printf("\t**Algoritmo que verifica si un numero es positivo o negativo**\n\n");
printf("\nIntroduce el numero\n");
scanf("%f",&N);

if(N<0)
{
  printf("\nEl numero que ingresaste es NEGATIVO\t %.0f",N);
}
 else if(N==0)
 {
    printf("\nEL numero que ingresaste en NEUTRO\t %.0f",N);
 }
  else if(N>0)
  {
      printf("\nEl numero que ingresaste es POSITIVO\t %.0f",N);
  }

printf("\n\n");
system("pause");
}
