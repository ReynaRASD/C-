#include<stdio.h>
#include<stdlib.h>
main ()
{
int A,AB,AC,B,BA,BC;
printf("Dadas 2 fechas, expresadas como tres números naturales, \ndeterminar si la primera es cronológicamente menor que la segunda.\n");
printf("\n\nFechas en orden cronologico\n");
printf("Expresar en DD/MM/AAAA\n");
printf ("ingrese  la primera fecha\n");
printf ("Dia\n");
scanf ("%d", &A);
printf ("Mes\n");
scanf ("%d", &AB);
printf ("Año\n");
scanf ("%d", &AC);
printf ("Ingresa la segunda fecha\n");
printf ("Dia\n");
scanf ("%d", &B);
printf ("Mes\n");
scanf ("%d", &BA);
printf ("Año\n");
scanf ("%d", &BC);
if (AC<=BC)
{
printf ("La primera es menor cronologicamente que la segunda\n");

}
else printf ("La segunda es menor cronologicamente que la primera\n");
system ("pause");
}
