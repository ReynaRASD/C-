#include <stdio.h>
#include <math.h>

int xa, ya;
int xb, yb;
int r1, r2, p1, p2;
double raiz;

int main()
{
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
