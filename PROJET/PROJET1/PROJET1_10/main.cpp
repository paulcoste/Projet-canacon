//voir si ca a pas depassé

#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

#define DIM 39

void initialiser_table (int t1[DIM], int t2[DIM]);

int main ()
{
    int table1[DIM];//pour test declarŽ precŽdement
    int table2[DIM];//pour test declarŽ precŽdement
    int i;//pour test declarŽ precŽdement
    initialiser_table(table1,table2);//pour test declarŽ precŽdement
    int p1=200;//pour tets fait precedement
    int p2=200;//pour test fait precedement
    int de=3;//pour test fait precedement
    int nom_pion;


//-----------------a declarer spetialement pour le sous programme
    int tab[DIM];
    int p;
    p=4;//pour test
    nom_pion=1;//pour test

    if(p+de<34)
    {
        tab[p+de-34]=nom_pion;
    }
    else if (p+de==34)
    {
        tab[34]=0;
        //un pion gagné
    }
    else;
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
