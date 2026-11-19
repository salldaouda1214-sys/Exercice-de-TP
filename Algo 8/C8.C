#include <stdio.h>

int main() {
    float montant, remise, montantAPayer;

    printf("Saisir le montant de l'achat : ");
    scanf("%f", &montant);

    if (montant > 100) 
        remise = montant * 0.10;
     else 
        remise = 0;
    

    montant a Payer = montant - remise;

    printf("Montant de la remise : %.2f €\n", remise);
    printf("Montant à payer : %.2f €\n", montantAPayer);

    return 0;
}