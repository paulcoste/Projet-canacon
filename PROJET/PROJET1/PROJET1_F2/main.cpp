//choix du joueur et deplacement

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 34

int tirage();
void initialiser_table (int t1[DIM], int t2[DIM]);
int verif_place(int posi_p,int D,int t1[DIM], int t2[DIM]);
int voeu2();
int voeu1();


int main()
{
    int table1[DIM];//table de jeu joueur1
    int table2[DIM];//table de jeu joueur2
    initialiser_table(table1,table2);
    int p1=200;//pour tets fait precedement
    int p2=200;//pour test fait precedement
    int de=3;//pour test fait precedement

    p1=4;//pour test
    p2=22;//pour test
    table1[28]=1;//pour test
    table2[10]=1;//pour test

    int t1,t2;
    t1=verif_place(p1,de,table1,table2);//=200 place libre =150 place prise
    t2=verif_place(p2,de,table1,table2);

    if(p1==222)//p2=222 le pion1 a fini
    {
        if(p2==222)//p2=222 le pion2 a fini
        {
            //you winn
        }
        if (t2==200)
        {
            if(voeu1()==1)
            {
                //bouger2
            }
            else
            {
                //ne rien faire
            }
        }
        else
        {
            //tu peux pas jouer frere
        }
    }
    else if(p1!=200)//p1=200 le pion est dans enclo
    {
        if(p2!=200)
        {
            if(t1==200 && t2==200)
            {
                switch(voeu2())
                {
                case 1 : //bouger1
                    break;
                case 2 : //bouger2
                    break;
                default : ;//ne rien faire
                }
            }
            else if (t1==200 && t2==150)
            {
                if(voeu1()==1)
                {
                    //bouger1
                }
                else
                {
                    //ne rien faire
                }
            }
            else if (t1==150 && t2==200)
            {
                if(voeu1()==1)
                {
                    //bouger2
                }
                else
                {
                    //ne rien faire
                }
            }
            else
            {
                //tu peux pas jouer frere
            }
        }
        else
        {
            if (t1==200 && de!=6)
            {
                if(voeu1()==1)
                {
                    //bouger1
                }
                else
                {
                    //ne rien faire
                }
            }
            else if (t1==200 && de==6)
            {
                if(p1!=0)
                {
                    switch(voeu2())
                    {
                    case 1 : //bouger1
                        break;
                    case 2 : //bouger2
                        break;
                    default : ;//ne rien faire
                    }
                }
                else
                {
                    if(voeu1()==1)
                    {
                        //bouger1
                    }
                    else
                    {
                        //ne rien faire
                    }
                }
            }
            else if (t1==150&&de==6)
            {
                if(p1!=0)
                {
                    //renter2
                }
                else ;
            }
            else
            {
                //tu peux pas jouer frere
            }
        }
    }
    else
    {
        if(de!=6)
        {
            //tu peux pas jouer frere
        }
        else
        {
            //rentre1
        }
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
    int D;
    srand(time(NULL));
    D=1+rand()%6;

return D;
}

int verif_place(int posi_p,int D,int t1[DIM], int t2[DIM])
{
    int p=posi_p+D;//position potentiel

    if(t1[p]==0)
    {
       if(t2[p]==0)
       {
           p=200;//si place dispo p=200
        }
    }
    else{p=150;}//si pas de place dispo p=150

return p;
}

int voeu2()
{
    int souhait;
    printf("tu veux jouer pion 1 ou pion 2 ou ne rien faire?(entrer 1, 2 ou 0)");
    scanf("%d",&souhait);

    return souhait;
}

int voeu1()
{
    int souhait;
    printf ("tu veux jouer ou ne rien faire? (entrer 1 pour jouer ou 0)");
    scanf("%d",&souhait);

    return souhait;
}
