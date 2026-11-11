#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a ,b, x ;
    printf("Equation du premier degre\n ");
    printf("donne a : ");
    scanf("%f", &a);
    printf("donne b : ");
    scanf("%f", &b);

    if (a > 0)
    {

        x = -b/a;
        printf("x = %.2f", x );
    }
    else if
        (a == 0 && b == 0)
    {
      printf("Infinité de solutions");
    }
    else
    {
     printf("aucune solutions");
    }


    return 0;
}
