/*Challenge 2 : Conversion de la température
Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin.
Formule :
K = C + 273.15*/


#include <stdio.h>

int main()
{
    float temp;
    float resultat;

    printf("saisir votre temperature: " );
    scanf("%f", &temp);

    resultat = temp+273.15;

    printf("voilla votre temp en KELVIN : %.2f\n",resultat );

    return 0;
}
