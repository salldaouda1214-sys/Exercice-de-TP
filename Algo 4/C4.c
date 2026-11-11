#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x, x1, x2;

    printf("Equation du second degre\n");

    printf("Entrer un nombre pour a : ");
    scanf("%f", &a);

    printf("Entrer un nombre pour b : ");
    scanf("%f", &b);

    printf("Entrer un nombre pour c : ");
    scanf("%f", &c);

    if (a != 0)
    {
        delta = b*b - 4*a*c;

        if (delta > 0)
        {
            x1 = (-b - sqrt(delta)) / (2*a);
            x2 = (-b + sqrt(delta)) / (2*a);

            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
        else if (delta == 0)
        {
            x = -b / (2*a);

            printf("Une solution double\n");
            printf("x = %.2f\n", x);
        }
        else
        {
            printf("Aucune solution reelle\n");
        }
    }
    else
    {
        printf("Ce n'est pas une equation du second degre\n");
    }

    return 0;
}


