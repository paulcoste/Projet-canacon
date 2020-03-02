//deplacement du pion
#include <stdio.h>
#include <stdlib.h>

#define DIM 34

void initialiser_table (int t1[DIM], int t2[DIM]);//pour test car fait precedement

int main()
{
    int table1[DIM];
    int table2[DIM];
    initialiser_table(table1,table2);//pour test

    int nom_du_pion=1;//pour test envoi nom du pion
    int pion=10;//pour test envoi de la position actuel
    int D=3;//pour test envoi de la valeur du D
    table1[pion]=0;
    table1[pion+D]=nom_du_pion;
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
