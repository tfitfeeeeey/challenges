 /*Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s).
Formule :
m/s = km/h * 0.27778*/


#include <stdio.h>

int main()
{
    float vitesse;
    float resultatms;

    printf("ton vitesse en (km/h): " );
    scanf("%f", &vitesse);

    resultatms = vitesse  *  0.27778 ;

    printf("voilla votre transforme en mètres par seconde : %.2f\n",resultatms );

    return 0;
}