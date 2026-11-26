    #include <stdio.h>
#include <stdlib.h>

int main()
{   float n ;
    printf("Mention d'un etudiant \n");
    printf("la moyenne sur 20: ");
    scanf("%f", &n);

    if  (n < 10)
    {
        printf("refuse");
    }
    else if  (n >= 10 && n < 12)

     {
         printf("Passable");
     }
     else if (n >=12 && n < 14)

    {
        printf("assez bien");
    }
    else if (n >= 14 && n < 16 )
    {
        printf("bien");
    }

    else
    {
        printf("tres bien");
    }
    return 0;
}
