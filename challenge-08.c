/*Challenge 8 : Calcul de la moyenne géométrique
Écrivez un programme en C pour trouver la moyenne géométrique de trois nombres saisis par l'utilisateur.
Formule :
Moyenne géométrique = (a * b * c)^(1/3)*/


#include<stdio.h>


int main() {
    float a, b, c;

    printf("Saisir N1: ");
    scanf("%f", &a);
    printf("Saisir N2: ");
    scanf("%f", &b);
    printf("Saisir N3: ");
    scanf("%f", &c);
    float moy = pow(a*b*c, 1/3.0);
    printf("Moyenne géométrique = %.2f", moy);

    return 0;
}