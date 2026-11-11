#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  S;

    printf("Le signe d'un nombre \n");

    printf("ajoute un nombre  : \n");
    scanf("%d", &S);




    if (S > 0)
    {
        printf("Positif\n");
    }
    else if (S < 0)
    {
        printf("Negatif\n");
    }
    else
    {
        printf("Null");
    }
    return 0;
}
