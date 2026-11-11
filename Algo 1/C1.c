#include <stdio.h>

int main()
{
    float prixHT, montantTVA, prixTTC;

    printf("Veuillez donner le Prix Hors Taxe : ");
    scanf("%f", &prixHT);

    printf("Veuillez donner le Montant de la TVA : ");
    scanf("%f", &montantTVA);

    prixTTC = prixHT * (1 + montantTVA / 100);

    printf("Le prix TTC est de : %.2f\n", prixTTC);

    return 0;
}


