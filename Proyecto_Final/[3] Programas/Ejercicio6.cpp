//Dado un valor de temperatura, medida en grados centígrados (C), convertirlo a grados Fahrenheit (F)
#include<stdio.h>
#include<conio.h>
float far(float cen);
main()
{
float cen, far;

printf("Dado un valor de temperatura, medida en grados Centígrados (C), \nconvertirlo a grados Fahrenheit (F)\n");
printf("\nIntrodusca la temperatura en grados centigrados (C):\n");
scanf("%f",&cen);
far=((9.0/5.0)*cen+32);
printf("\nPara la conversion de grados Centigrados a Fahrenheit se realiza: ((9/5)*cen+32)\n");
printf("\nEn Cetigrados C= %.5f\n",cen);
printf("\nEn grados Fahrenheit F= %.5f\n",far);
printf("\nGracias por usar el programa!!!!!!!!\n");
getch();
return 0;
}


