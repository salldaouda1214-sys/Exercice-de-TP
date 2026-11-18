#include <stdio.h>

int main() {
    float poids, taille, imc;

    printf("Saisir le poids (kg) : ");
    scanf("%f", &poids);

    printf("Saisir la taille (m) : ");
    scanf("%f", &taille);

    imc = poids / (taille * taille);

    printf("IMC = %.2f\n", imc);

    if (imc < 18.5) {
        printf("Categorie : Maigreur\n");
    } else if (imc < 25) {
        printf("Categorie : Normal\n");
    } else if (imc < 30) {
        printf("Categorie : Surpoids\n");
    } else {
        printf("Categorie : Obesite\n");
    }

    return 0;
}