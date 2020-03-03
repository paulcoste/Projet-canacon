//regrouper table1 table2

#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

#define DIM 35

void initialiser_table (int t1[DIM], int t2[DIM]);

int main ()
{
    int table1[DIM];//pour test declaré precédement
    int table2[DIM];//pour test declaré precédement
    int i;//pour test declaré precédement
    initialiser_table(table1,table2);//pour test declaré precédement

    int table_affich[DIM];

    table1[2]=3;//pour test
    table2[16]=8;//pour test

    for(i=0;i<17;i++)
    {
        if(table1[i]!=0)
        {
            table_affich[i]=table1[i];
        }
        else if(table2[i+17]!=0)
        {
            table_affich[i]=table2[i+17];
        }
        else
        {
            table_affich[i]=0;
        }
    }

    for(i=17;i<34;i++)
    {
        if(table1[i]!=0)
        {
            table_affich[i]=table1[i];
        }
        else if(table2[i-17]!=0)
        {
            table_affich[i]=table2[i-17];
        }
        else
        {
            table_affich[i]=0;
        }
    }
//------------------------ mettre dans osu programme
        for(i=0;i<16;i++)
    {
        printf("%d ",table_affich[i]);
    }
    printf("\n%d                                 %d",table_affich[33],table_affich[16]);
    printf("\n  ");
        for(i=32;i>16;i--)
    {
        printf("%d ",table_affich[i]);
    }
//-------------------------
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
