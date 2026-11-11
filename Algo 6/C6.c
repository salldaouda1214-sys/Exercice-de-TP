#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, F;

    printf("Donner la temperature en Celsius : ");
    scanf("%f", &C);

    F = C * 9 / 5 + 32;

    printf("La temperature en Fahrenheit est : %.2f\n", F);

    return 0;
}