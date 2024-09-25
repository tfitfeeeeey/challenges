/* Challenge 5 : Affichage Température
Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz).
Règle :

C < 0 : Solide
0 <= C < 100 : Liquide
C >= 100 : Gaz*/

#include <stdio.h>

int main()
{
    int temp;

    printf("donner votre temperature:");
    scanf("%d", &temp);

    if (temp < 0){
      printf("L'eau est à l'état solide.");
    }
    else if (0 <= temp && temp < 100){
      printf("L'eau est à l'état liquide.");
    }
    else {
       printf("L'eau est à l'état gazeux.");

    }
      return 0;
}
  

    
