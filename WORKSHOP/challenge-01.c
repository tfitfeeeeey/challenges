/*Challenge 1 :
Affichage Informations
Écrivez un programme en C qui va permettre
dafficher vos informations personnelles : nom, prénom, âge, sexe, et adresse email. Les données sont saisies à partir du clavier.*/


#include <stdio.h>

int main()
{
    char nom[10];
    char prenom[10];
    char sexe[10];
    char email[50];
    int age;

    printf("taper votre nom: " );
    scanf("%s", nom);
    printf("taper votre prenom: " );
    scanf("%s", prenom);
    printf("taper votre sexe: " );
    scanf("%s", sexe);
    printf("taper votre email: " );
    scanf("%s", email);
    printf("taper votre age: " );
    scanf("%d", &age);

    printf("voilla votre information \n");

    printf("Nom: %s", nom);
    printf("Prénom: %s", prenom);
    printf("Age: %d", age);
    printf("Sexe: %s", sexe);
    printf("Email: %s", email);
    
    return 0;
}
