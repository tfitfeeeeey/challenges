/*Challenge 6 : Calcul et affichage des résultats
Deux nombres réels, a et b, sont saisis au clavier. Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.*/



#include <stdio.h>

int main() {
    float a,b;

    printf("Saisir a: ");
    scanf("%f", &a);
    printf("Saisir b: ");
    scanf("%f", &b);
    printf("%f + %.2f = %.2f\n", a, b, a+b);
    printf("%f - %.2f = %.2f\n", a, b, a-b);
    printf("%f * %.2f = %.2f\n", a, b, a*b);
    printf("%f / %.2f = %.2f\n", a, b, a/b);

    return 0;
}