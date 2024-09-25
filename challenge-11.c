/*Challenge 11 : Surface d'un rectangle
Écrivez un programme pour trouver la surface d'un rectangle. Prenez la longueur et la largeur du rectangle en entrée de l'utilisateur.
Formule pour la surface d'un rectangle :
Surface = longueur * largeur*/

#include<stdio.h>

int main() {
    float longueur, largeur;

    printf("Saisir la longueur: ");
    scanf("%f", &longueur);
    printf("Saisir la largeur: ");
    scanf("%f", &largeur);
    float surface = longueur * largeur;
    printf("surface = %.2f", surface);

    return 0;
}