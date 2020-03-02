#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM_NOM 20
#define DIM 34

int tirage();
void prenom (char j1[DIM_NOM],char j2[DIM_NOM],int *a1,int *a2);
void initialiser_table (int t1[DIM], int t2[DIM]);

int main()
{
    int age1, age2;
    char joueur1[DIM_NOM];
    char joueur2[DIM_NOM];
    int table1[DIM];//table de jeu joueur1
    int table2[DIM];//table de jeu joueur2
    initialiser_table(table1,table2);

    prenom (joueur1,joueur2,&age1,&age2);

    printf("\nl'age de %s est %d",joueur1,age1);//pour test
    printf("\nl'age de %s est %d",joueur2,age2);//pour test
    if(age1<age2)
    {
        printf("\n\njaune est joueur %s",joueur1);
        printf("\nvert est joueur %s",joueur2);
    }
    else
    {
        printf("\n\njaune est joueur %s",joueur2);
        printf("\nvert est joueur %s",joueur1);
    }




return 0;
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

int tirage()
{
    int D
    srand(time(NULL));
    D=1+rand()%6;

return D;
}


void prenom (char j1[DIM_NOM],char j2[DIM_NOM],int *a1,int *a2)
{
    printf("prenom joueur 1 : "); scanf("%s",j1);
    printf("entrer l'age du joueur 1 : "); scanf("%d",a1);
    printf("prenom joueur 2 : "); scanf("%s",j2);
    printf("entrer l'age du joueur 2 : "); scanf("%d",a2);
}
