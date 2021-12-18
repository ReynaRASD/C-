#include <stdio.h>
#define M 3
#define N 3
#define P 3

Multiplicacion_Matrices(void)

{

int i;
int j;
int k;

int Matriz1[M][N] = { {0}};

printf("\nESTE PROGRAMA MULTIPLICA DOS MATRICES CUADRADAS! DE : %d POR %d", M, N);
printf("\nAQUI SE RECIBEN LOS ELEMENTOS DE LA PRIMERA MATRIZ.\n");

for ( i = 0; i < M; i++)
{
for ( j = 0; j < N; j++)
{

printf("\nIntroduzca la entrada (%d,%2d) para la primera matriz \n", i, j);
scanf("%d", &Matriz1[i][j]);

}
}

int Matriz2[N][P] = {{ 5}};

printf("\nAQUI SE RECIBEN LOS ELEMENTOS DE LA SEGUNDA MATRIZ:\n");

for ( i = 0; i < N; i++)
{
for ( j = 0; j < P; j++)
{

printf("\nIntroduzca la entrada (%d,%2d) para la segunda matriz \n", i, j);
scanf("%d", &Matriz2[i][j]);

}
}

int Matriz_Producto[M][P] = {{0}};

for ( k = 0; k < M; k++)
{
for ( j = 0; j < P; j++)
{

for ( i = 0; i < N; i++ )
Matriz_Producto[ k ][j ] += Matriz1[k][i]*Matriz2[i][j];

}
}

printf("\n\nAQUI SE IMPRIMEN LAS DOS MATRICES Y EL PRODUCTO: \n\n");
for ( i = 0; i < M; i++ )
{

for ( k = 0; k < N; k++)
{
printf("%3d", Matriz1[i][k]);

}

printf("\t\t");

for ( j = 0; j < P; j++)

{
    if ( i <= (N - 1))

printf("%3d", Matriz2[i][j]);

else

printf(" ");

}

printf ("\t\t");


for ( j = 0; j < P; j++ )
{
printf("%3d", Matriz_Producto[i][j]);
}

printf("\n");

}

if ( N > M)
{

int l = M;

while ( l < N )
{

for ( i = 0; i < N; i++)
printf(" ");

printf("\t\t\t");

for ( j = 0; j < P; j++ )
printf("%3d", Matriz2[l][j]);

printf("\n");
l++;

}

}

}

int main()

{

Multiplicacion_Matrices();

return 0;
}
