/*Challenge 13 : Affichage des valeurs binaire et hexadécimale équivalentes
Écrivez un programme C pour afficher la valeur équivalente en binaire et en hexadécimal.
Entrez un nombre entier et affichez ses valeurs équivalentes en binaire et en hexadécimal.*/

#include <stdio.h>

int main() {

    int N, N_hexa;
    long long N_binaire = 0;
    printf("Saisir un entier : ");
    scanf("%d", &N);
    while(N != 0) {
        N_binaire *= 10 + N%2;
        N /= 2;
    }
    printf("Format binaire : %lld", N_binaire);

    return 0;
}