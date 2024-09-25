/*Challenge 7 : Moyenne pondérée de trois nombres
Écrivez un programme en C pour calculer la moyenne pondérée de trois nombres donnés par l'utilisateur avec les pondérations suivantes :

1er nombre : pondération 2
2ème nombre : pondération 3
3ème nombre : pondération 5*/

#include<stdio.h>

int main() {
    float a, b, c;

    printf("Saisir N1: ");
    scanf("%f", &a);
    printf("Saisir N2: ");
    scanf("%f", &b);
    printf("Saisir N3: ");
    scanf("%f", &c);
    float moy = (a*2 + b*3 + c*5) / 9;
    printf("Moyenne pondérée = %.2f", moy);

    return 0;
}