//initialisation des tables de jeu

#include <stdio.h>
#include <stdlib.h>
#define DIM 34//table de jeu

int main()
{
    int table1[DIM];//table de jeu joueur1
    int table2[DIM];//table de jeu joueur2
    int i,test;
    for(i=0;i<DIM;i++)//je rentre la valeur 0 dans toutes les tables, 0->case vide
    {
        table1[i]=0;
        table2[i]=0;
    }
    test=table1[0];//pour test
    printf("\n\n%d\n",test);//pour test
    test=table1[DIM-1];//pour test
    printf("\n%d\n\n",test);//pour test

    retun 0;
}
