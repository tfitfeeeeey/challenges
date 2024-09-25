/*Challenge 12 : Nombre entier à quatre chiffres en ordre inverse
Écrivez un programme C pour afficher un nombre entier à quatre chiffres dans
l'ordre inverse sans utiliser de boucle. Par exemple, si le nombre entier est 1234, son inverse est 4321.*/

#include <stdio.h>

int main() {

    int N, inv = 0;
    printf("Donner un nombre de 4 chiffres : ");
    scanf("%d", &N);
    inv = inv*10 + N%10;
    N = N/10;
    inv = inv*10 + N%10;
    N = N/10;
    inv = inv*10 + N%10;
    N = N/10;
    inv = inv*10 + N%10;
    printf("%d", inv);
    
    return 0;

}