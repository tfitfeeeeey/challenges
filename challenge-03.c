/*Écrivez un programme qui demande la distance en kilomètres et la transforme en yards.
Formule :
Yards = Km * 1093.61*/

#include <stdio.h>

int main()
{
    float dist;
    float resultatdst;

    printf("saisir la distance en km: " );
    scanf("%f", &dist);

    resultatdst = dist  *  1093.61 ;

    printf("voilla votre distance en kilomètres et la transforme en yards : %.2f\n",resultatdst );

    return 0;
}

