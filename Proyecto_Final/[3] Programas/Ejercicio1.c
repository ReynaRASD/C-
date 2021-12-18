#include <stdio.h>
#include <stdlib.h>

main()
{
int A,B,C,D;
printf("\t**Desarrolle un algoritmo que lea cuatro números diferentes y a \ncontinuación imprima nel mayor de los cuatro números \nintroducidos y también el menor de ellos. **\n\n");
printf("\n\nIntroduce el primer numero\n");
scanf("%d",&A);
printf("\nIntroduce el segundo numero\n");
scanf("%d",&B);
printf("\nIntroduce el tercer numero\n");
scanf("%d",&C);
printf("\nIntroduce el cuarto numero\n");
scanf("%d",&D);
if((A>B)&(A>C)&(A>D))
{
  printf("\nEl primer numero es el mayor\t %d",A);
}
 else if((B>A)&(B>C)&(B>D))
 {
    printf("\nEl segundo numero es el mayor\t %d",B);
 }
  else if((C>A)&(C>B)&(C>D))
  {
      printf("\nEl tercer numero es el mayor\t %d",C);
  }
   else if((D>A)&(D>B)&(D>C))
   {
        printf("\nEl cuarto numero es el mayor\t %d",D);
    }

if((A<B)&(A<C)&(A<D))
{
  printf("\nEl primer numero es el menor\t %d",A);
}
 else if((B<A)&(B<C)&(B<D))
 {
    printf("\nEl segundo numero es el menor\t %d",B);
 }
  else if((C<A)&(C<B)&(C<D))
  {
      printf("\nEl tercer numero es el menor\t %d",C);
  }
   else if((D<A)&(D<B)&(D<C))
   {
        printf("\nEl cuarto numero es el menor\t %d",D);
    }
printf("\n\n");
system("pause");
}
