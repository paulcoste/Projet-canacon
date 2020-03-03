//tirage d alatoire

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int de=1+rand()%6;

return de;
}
