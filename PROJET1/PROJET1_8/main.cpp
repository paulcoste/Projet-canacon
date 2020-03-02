//affichage table de jeu

#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

#define DIM 34

void initialiser_table (int t1[DIM], int t2[DIM]);

int main()
{
    int table1[DIM];
    int table2[DIM];
    int i, cases;
    initialiser_table(table1,table2);
    system("clear");

    table1[33]=1;

    printf("  ");
    for(i=0;i<16;i++)
    {
        cases=table1[i];
        printf("%d ",cases);
    }
    printf("\n%d                                 %d",table1[33],table1[16]);
    printf("\n  ");
        for(i=32;i>16;i--)
    {
        cases=table1[i];
        printf("%d ",cases);
    }
}

void initialiser_table (int t1[DIM], int t2[DIM])
{
        int i;
    for(i=0;i<DIM;i++)//je rentre la valeur 0 dans toutes les tables, 0->case vide
    {
        t1[i]=0;
        t2[i]=0;
    }
}
