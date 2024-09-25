/*Challenge 9 : Calcul de la distance entre deux points dans un espace 3D
Écrivez un programme C pour trouver la distance entre deux points donnés dans un espace 3D.
Formule :
Distance = √((x2-x1)² + (y2-y1)² + (z2-z1)²)*/

#include<stdio.h>

int main() {
    float x1, x2, y1, y2;

    printf("Saisir x1: ");
    scanf("%f", &x1);
    printf("Saisir y1: ");
    scanf("%f", &y1);
    printf("Saisir z1: ");
    scanf("%f", &z1);
    printf("Saisir x2: ");
    scanf("%f", &x2);
    printf("Saisir y2: ");
    scanf("%f", &y2);
    printf("Saisir z2: ");
    scanf("%f", &z2);
    float dis = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2) + pow(z2-z1, 2));
    printf("distance = %.2f", dis);

    return 0;
}