#include <stdio.h>
#include <stdlib.h>
main ()
{
     float k, m;
     system ("cls");
     printf ("Dado un valor de velocidad medido en kilómetros/hora convertirlo a metros/seg. \n");
     printf("\n\nDame los kilometros a convertir\n\n");
     scanf("%f", &k);
     m=k*1000/60/60;
     printf ("\n\nla cantidad de metros son\n\n:%f", m);
     system("pause");
     }
