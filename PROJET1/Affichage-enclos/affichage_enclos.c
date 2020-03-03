#include <stdio.h>
#include <stdlib.h>

void affichage_enclos (int p1, int p2);
int main()
{
   int p1=20;
   int p2=20;
   affichage_enclos (p1,p2);
}

void affichage_enclos (int p1, int p2)
{
    if (p1==200&&p2==200)
    {
      printf ("enclos : canasson 1 et canasson 2 disponibles \n");
    }
    else {}
    if (p1!=200&&p2==200)
    {
       printf ("enclos : canasson 2 disponible \n");
    }
    else {}
    if (p1!=200&&p2!=200)
    {
        printf ("enclos : aucun canasson disponible \n");
    }
   else {}

    }
