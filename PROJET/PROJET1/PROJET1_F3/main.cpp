#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PLACE_LIB 200
#define PLACE_PRI 150
#define ENCLOS 200
#define WIN 222


#define DIM 39

int tirage();
void initialiser_table (int t1[DIM], int t2[DIM]);
int verif_place(int posi_p,int D,int t1[DIM], int t2[DIM]);
int voeu2();
int voeu1();
void bouger (int nom_pion,int *position, int D, int tab[DIM]);
void verif_win (int nom_p,int posi, int D, int tab[DIM],int *w);

int main()
{
    int table1[DIM];//table de jeu joueur1
    int table2[DIM];//table de jeu joueur2
    initialiser_table(table1,table2);
    int p1=ENCLOS;//pour tets fait precedement
    int p2=ENCLOS;//pour test fait precedement
    int de=6;//pour test fait precedement
    int i;

    int tes =222;
    p1=tes;//pour test
    p2=2;//pour test
    //table1[tes]=1;//pour test
    table1[2]=2;//pour test

    int t1,t2;
    t1=verif_place(p1,de,table1,table2);//=200 place libre =150 place prise
    t2=verif_place(p2,de,table1,table2);

    if(p1==WIN)//p2=222 le pion1 a fini
    {
        if(p2==WIN)//p2=222 le pion2 a fini
        {
            printf("ta win");//you winn
        }
        else if (t2==PLACE_LIB)
        {
            if(voeu1()==1)
            {
                bouger(2,&p2,de,table1);
            }
            else
            {
                printf("t con");//ne rien faire
            }
        }
        else
        {
            printf("deso t nuuuul");//tu peux pas jouer frere
        }
    }
    else if(p1!=ENCLOS)//p1=200 le pion est dans enclo
    {
        if(p2!=ENCLOS)
        {
            if(t1==PLACE_LIB && t2==PLACE_LIB)
            {
                switch(voeu2())
                {
                case 1 : bouger(1,&p1,de,table1);//bouger1
                    break;

                case 2 : bouger(2,&p2,de,table1);//bouger2
                    break;
                default : printf("t con");//ne rien faire
                }
            }
            else if (t1==PLACE_LIB && t2==PLACE_PRI)
            {
                if(voeu1()==1)
                {
                    bouger(1,&p1,de,table1);//bouger1
                }
                else
                {
                    printf("t cooon");//ne rien faire
                }
            }
            else if (t1==PLACE_PRI && t2==PLACE_LIB)
            {
                if(voeu1()==1)
                {
                    bouger(2,&p2,de,table1);//bouger2
                }
                else
                {
                    printf("t con");//ne rien faire
                }
            }
            else
            {
                printf("deso t nul");//tu peux pas jouer frere
            }
        }
        else
        {
            if (t1==PLACE_LIB && de!=6)
            {
                if(voeu1()==1)
                {
                    bouger(1,&p1,de,table1);//bouger1
                }
                else
                {
                    printf("t con");//ne rien faire
                }
            }
            else if (t1==PLACE_LIB && de==6)
            {
                if(p1!=0)
                {
                    switch(voeu2())
                    {
                    case 1 : bouger(1,&p1,de,table1);//bouger1
                        break;
                    case 2 : {p2=0;table1[0]=2;}//bouger(2,&p2,de,table1);//bouger2
                        break;
                    default : printf("t con");//ne rien faire
                    }
                }
                else
                {
                    if(voeu1()==1)
                    {
                        bouger(1,&p1,de,table1);//bouger1
                    }
                    else
                    {
                        printf("t con");//ne rien faire
                    }
                }
            }
            else if (t1==PLACE_PRI&&de==6)
            {
                if(p1!=0)
                {
                    p2=0;
                    table1[0]=2;//renter2
                }
                else ;
            }
            else
            {
                printf("deso t nul");//tu peux pas jouer frere
            }
        }
    }
    else
    {
        if(de!=6)
        {
            printf("deso t nul");//tu peux pas jouer frere
        }
        else
        {
            p1=0;
            table1[0]=1;//rentre1
        }
    }

//---------------------------a mettre dans un sous programme du programme principal------
    printf("\n\n  ");
        for(i=0;i<16;i++)
        {
            printf("%d ",table1[i]);
        }
        printf("\n%d                                 %d",table1[33],table1[16]);
        printf("\n  ");
            for(i=32;i>16;i--)
        {
            printf("%d ",table1[i]);
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

int verif_place(int posi_p,int D,int t1[DIM], int t2[DIM])
{
    int p=posi_p+D;//position potentiel

    if(t1[p]==0)
    {
       if(t2[p]==0)
       {
           p=PLACE_LIB;//si place dispo p=200
        }
    }
    else{p=PLACE_PRI;}//si pas de place dispo p=150

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

void bouger (int nom_pion,int *position, int D, int tab[DIM])
{
    int win=0;

    verif_win(nom_pion,*position,D,tab,&win);//tester si on met * ou pas// est ce qu'il envoie bien la valeur de position
    if(win!=123)
    {
        tab[*position]=0;
        tab[*position+D]=nom_pion;
    }
    else
    {
        *position=WIN;
    }//ne bouge pas car arrive


}

void verif_win (int nom_p,int posi, int D, int tab[DIM],int *w)
{
    if(posi+D<34)
    {
        tab[posi+D-34]=nom_p;
    }
    else if (posi+D==34)
    {
        tab[34]=0;

        *w=123;
    }
    else;
}
