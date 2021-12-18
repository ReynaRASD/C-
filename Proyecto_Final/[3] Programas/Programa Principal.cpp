#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include"rasd.h"

main()
{
char cadena1[12]="rasd";
char password[12];

int respuesta;

char nombre [10];
char mensaje [50]="	HOLA " ;

printf("BIENVENIDO AL PROYECTO FINAL en C++ ");
printf("\n Ingresa tu Nombre: ");
gets(nombre);
printf("\n Ingrese password: ");
scanf("%s",&password);
strcat(mensaje, nombre);

respuesta=strcmp(cadena1,password);

if (respuesta ==0)
{
              printf( "",'nombre' );

              }
if (respuesta==1)
{
              printf("\n");
               printf("\n ACCESO DENEGADO");
               printf("\n");
               system("pause");
               exit(0);
               }


char op_salir,op_menu, a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
do
{
system("pause");
printf("\n\n");
printf(" Bienvenido al proyecto final en C ++, \nseleccione el programa que desee usar \n");
printf(" 1.Problema (a) \n");
printf(" 2.Problema (b)\n");
printf(" 3.Problema (c)\n");
printf(" 4.Problema (d)\n");
printf(" 5.Problema (e)\n");
printf(" 6.Problema (f)\n");
printf(" 7.Problema (g)\n");
printf(" 8.Problema (h)\n");
printf(" 9.Problema (i)\n");
printf(" 10.Problema (j)\n");
printf(" 11.Problema (k)\n");
printf(" 12.Problema (l)\n");
printf(" 13.Problema (m)\n");
printf(" 14.Problema (n)\n");
printf(" 15.Problema (o)\n");
op_menu=getche();


switch(op_menu)
{
    case 'a':
    {
int A,B,C,D;
system("cls");
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
break;

case 'b':
    {
float N;
system("cls");
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
break;

case 'c':
    {
 int N;
 system("cls");
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
                }
    }
break;

case 'd':
    {
int a,b,c,d,e;
system("cls");
    printf("Algoritmo para leer 5 numeros e imprimir solo los pares\n");
    printf("Introduce el primer numero\n");
    scanf("%d", &a);
    printf("Introduce el segundo numero\n");
    scanf("%d", &b);
    printf("Introduce el tercer numero\n");
    scanf("%d", &c);
    printf("Introduce el cuarto numero\n");
    scanf("%d", &d);
    printf("Introduce el quinto numero\n");
    scanf("%d", &e);
    if (a % 2==0)
    {
    printf("EL NUMERO:%.2d\n", a);
    printf("ES PAR \n");
    }
    else{
    printf("");
    }
    if (b % 2==0)
    {
    printf("EL NUMERO:%.2d\n", b);
    printf("ES PAR \n");
    }
    else{
    printf("");
    }
    if (c % 2==0)
    {
    printf("EL NUMERO:%.2d\n", c);
    printf("ES PAR\n ");
    }
    else{
    printf("");
    }
    if (d % 2==0)
    {
    printf("EL NUMERO:%.2d\n" ,d);
    printf("ES PAR\n ");
    }
    else{
    printf("");
    }
    if (e % 2==0)
    {
    printf("EL NUMERO:%.2d\n", e);
    printf("ES PAR\n ");
    }
    else{
    printf("");
    }


    system("pause");
    }
break;

case 'e':
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
break;

case 'f':
    {
float cen, far;
system("cls");
printf("Dado un valor de temperatura, medida en grados Centígrados (C), \nconvertirlo a grados Fahrenheit (F)\n");
printf("\nIntrodusca la temperatura en grados centigrados (C):\n");
scanf("%f",&cen);
far=((9.0/5.0)*cen+32);
printf("\nPara la conversion de grados Centigrados a Fahrenheit se realiza: ((9/5)*cen+32)\n");
printf("\nEn Cetigrados C= %.5f\n",cen);
printf("\nEn grados Fahrenheit F= %.5f\n",far);
printf("\nGracias por usar el programa!!!!!!!!\n");
getch();
    }
break;

case 'g':
    {
        system("cls");
       printf("Calcular la distancia euclidiana entre dos puntos (x1, y1) y (x2, y2)");
 printf("\nIntroduzca las coordenadas del primer punto: \n");
    printf("X= ");  scanf("%d", &xa);
    printf("Y= ");  scanf("%d", &ya);
    printf("\n");
    printf("\nIntroduzca las coordenadas del segundo punto: \n");
    printf("X= "); scanf("%d", &xb);
    printf("Y= "); scanf("%d", &yb);
    printf("\n");
    r1 = xb - xa;
    r2 = yb - ya;
    p1 =  pow( r1, 2);
    p2 =  pow( r2, 2);
    raiz = sqrt( p1 + p2 );
    printf("\nLa distancia entre P1(%d, %d) y P2(%d, %d) es : %f", xa, ya, xb, yb, raiz);
    printf("\n");
system("pause");
    }
break;

case 'h':
    {
        system("cls");
printf("\nEste programa realiza la sumatoria de los numeros enteros multiplos de 5, \ncomprendidos entre el 1 y el 100, es decir, 5 + 10 + 15 +...+ 100. \nEl programa debera imprimir los numeros en cuestion \ny finalmente su sumatoria\n");
system("\n\npause\n");
printf("\nMultiplos de 5:\n");
system("\n\npause\n");
Mult();
printf("\nGracias!\n");

system("\n\npause\n");
    }
break;

case 'i':
    {
int total , H=5, M=60;
system("cls");
     printf ("\n\n Cuantos minutos hay en 5 horas? \n\n");
     system ("pause");
     total = M*H;
     printf ("\nEn 5 horas hay:%i\n\n",total);

     system ("pause");
    }
break;

case 'j':
    {
int n,c;
float p[1000],sum = 0.0, pro;
system("cls");
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
break;

case 'k':
    {
int A,AB,AC,B,BA,BC;
system("cls");
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
break;

case 'l':
    {
  int  A,B,C;
      float X1,X2;
      system("cls");
      printf("\n Calculo de las soluciones de un polinomio de segundo grado Ax^2+Bx+C\n");
      printf("\n Ingresa el valor de A");
      scanf("%d",&A);
      printf("\n Ingresa el valor de B");
      scanf("%d",&B);
      printf("\n Ingresa el valor de C");
      scanf("%d",&C);

      X1=(-B+(sqrt(B*B-F*A*C)))/R*A;
      X2=(-B-(sqrt(B*B-F*A*C)))/R*A;

      printf("\n El valor de X1 es: %.3f",X1);
      printf("\n El valor de X2 es: %.3f",X2);

      system("pause");
    }
break;

case 'm':
    {
int G,L,D;
system("cls");
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
    }
break;

case 'n':
    {
int p;
 	int n;
 	int e=1;
 	int i=1;
system("cls");
 	printf("BIENVENIDO AL ALGORITMO QUE SACA LA N-ESIMA POTENCIA\n");
 	printf("INGRESA EL NUMERO A ELEVAR\n");
 	scanf("%d",&n);
 	printf("INGRESA LA POTENCIA QUE SE ELEVARA(esta debe ser posotiva)\n");
 	scanf("%d",&p);

 	while (i<=p)
 	{
 	e=e*n;
	 i++;
 	 }

 	printf ("EL RESULTADO ES:%d ",e);
 	system("pause");
    }
break;

case 'o':
    {
int n,m,k,l,i,j,r;
double a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
do
{
system("cls");
    printf("Dada una matriz A de dimensiones NxM y una matriz B de dimensiones KxL, \ncalcular la multiplicación de ambas matrices.  \nLas matrices A y B deben pasarse como parámetros \nde la función que realiza la multiplicación de ambas. \n");

    printf("\n\nIntroduca las filas (n) y columnas (m) de la matriz a:\n");
do
{
printf("Introdusca n   (0<n<=%d):\n",MAX);
scanf("%d",&n);
}while( (n<=0) || (n>MAX) );
do
{
    printf("Introdusca m   (o<m<=%d):\n",MAX);
    scanf("%d", &m);
}while( (m<=0) || (m>MAX) );
    printf("\nIntrodusca las filas (k) y columnas (l) de la matriz b:\n");
    printf("\n(recuerde que k debe ser igual a m=%d)\n",m);
    do{
    printf("Introdusca k  (0<k<=%d):\n",MAX);
    scanf("%d",&k);
    }while( (k<=0) || (k>MAX) );
    do
    {
        printf("Introdusca l  (0<l<=%d:\n",MAX);
        scanf("%d",&l);
    }while( (l<=0) || (l>MAX));
}while(m!=k);
printf("\nIntrodusca la matriz a:\n");
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        printf("\tIntrodusca a[%d][%d]:",i,j);
        scanf("%lf", &(a[i][j]));
    }
    printf("\n");
}
printf("\nIntrodusca la matriz b:\n");
for(i=0;i<k;i++)
{
    for(j=0;j<l;j++)
    {
        printf("\tIntrodusca b[%d][%d]:",i,j);
        scanf("%lf", &(b[i][j]));
    }
    printf("\n");
}
for(i=0;i<n;i++)
{
    for(j=0;j<l;j++)
    {
        c[i][j]=0;
        for(r=0;r<m;r++)
        {
            c[i][j]=c[i][j]+a[i][j]*b[r][j];
        }
    }
    printf("\n");
}
printf("El producto de ambas matrices es:\n");
for(i=0;i<n;i++)
{
    for(j=0;j<l;j++)
    {
        printf("\tc[%d][%d]=%f",i,j,c[i][j]);
    }
    printf("\n");
}
printf("\n\n\n");
  printf("\n Gracias por usar el programa!");
    printf("\n");
    system("pause");
    }
break;

default:
     printf("valor no disponible");
}

printf("\n Presione 's' para salir o cualquier tecla para volver al menu principal\n\n");

op_salir=getche();

if(op_salir=='s')
{
system("cls");
printf("Adios, gracias por usar el programa!!!\n");
getch();
}
}while(op_salir!='s');
}
