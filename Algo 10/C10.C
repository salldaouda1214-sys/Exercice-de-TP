#include <stdio.h>

int main() {
    float moyenne;

    printf("Saisir la moyenne sur 20 : ");
    scanf("%f", &moyenne);

    if (moyenne < 10) 
        printf("Mention : Refuse\n");
     else if (moyenne < 12) 
        printf("Mention : Passable\n");
     else if (moyenne < 14) 
        printf("Mention : Assez bien\n");
     else if (moyenne < 16) 
        printf("Mention : Bien\n");
     else 
        printf("Mention : Tres bien\n");
    

    return 0;
}