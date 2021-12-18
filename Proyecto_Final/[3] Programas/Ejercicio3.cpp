//Determinar si un numero es par o impar

#include<stdio.h>
#include<stdlib.h>

main()
{
      int N;
      printf("\nAlgoritmo de verificacion si un numero es par o impar\n");
      printf("\nIngrese numero:     \n");
      scanf("%d",&N);
      if (N%2==0)
      {
      printf("%d ES PAR\n",N);
      }
      else
      {
      printf("%d ES IMPAR\n",N);
      system ("pause");
      return 0;        
                }
 }
