//tester la place

#include <stdio.h>
#include <stdlib.h>
#define DIM 34

void initialiser_table (int t1[DIM], int t2[DIM]);

int main()
{

    int table1[DIM];//pour test car fait précedement
    int table2[DIM];//table de jeu joueur2
    initialiser_table(table1,table2);

    int pion=2;//pour test envoie position du pion

    int D=4;//pour test envoie tirage D
    int p=pion+D;//position potentiel



    if(table1[p]==0)
    {
       if(table2[p]==0)
       {
           p=200;//si place dispo p=200
        }
    }
    else{p=150;}//si pas de place dispo p=150

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
