//comparer age joueur

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age1=12;//pour test
    int age2=8;//pour test
    int jaune, vert;
    if(age1<age2)
    {
        jaune=1;
        vert=2;
    }
    else
    {
        jaune=2;
        vert=1;
    }
    printf("\njaune est joueur %d",jaune);
    printf("\nvert est joueur %d",vert);


}
