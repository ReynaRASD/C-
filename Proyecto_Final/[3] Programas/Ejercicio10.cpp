#include<stdio.h>
#include<stdlib.h>

main()
{
int n,c;
float p[1000],sum = 0.0, pro;
printf("\t\tAlgoritmo que calcule el promedio entre N numeros\n");
printf("\nIngrese la Cantidad de Numeros: ");
scanf("%d",&n);

for(c=0;c<n;c++){
printf("\nIngrese el elemento #%d: ",c+1);
scanf("%f",&p[c]);
}
for(c=0;c<n;c++)
sum += p[c];
pro = sum/n;

printf("\nEl Promedio es %f\n",pro);

system("pause");
}
