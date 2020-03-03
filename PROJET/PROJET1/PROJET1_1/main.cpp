//demander l'age du joueur

#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#define DIM_NOM 20

int main()
{
    int age1, age2;
    char joueur1[DIM_NOM];
    char joueur2[DIM_NOM];

    printf("prenom joueur 1 : "); scanf("%s",joueur1);
    printf("entrer l'age du joueur 1 : "); scanf("%d",&age1);
    printf("prenom joueur 2 : "); scanf("%s",joueur2);
    printf("entrer l'age du joueur 2 : "); scanf("%d",&age2);

    system("clear");//nettoyer console

    printf("l'age de %s est %d",joueur1,age1);//pour test
    printf("\nl'age de %s est %d",joueur2,age2);//pour test

return 0;
}
