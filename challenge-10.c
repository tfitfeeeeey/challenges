/*Challenge 10 : Volume d'une sphère
Écrivez un programme pour trouver le volume d'une sphère. Prenez le rayon de la sphère en entrée de l'utilisateur.
Formule pour le volume d'une sphère :
Volume = (4/3) * π * r³*/

#include<stdio.h>

int main() {
    float r;

    printf("Saisir le rayon: ");
    scanf("%f", &r);
    float volume = (4/3.0) * 3.14 * pow(r, 3);
    printf("volume = %.2f", volume);

    return 0;
}