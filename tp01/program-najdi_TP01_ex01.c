// Algorithme PrixTotal (TB01_ex01)

#include <stdio.h>

int main()
{
	float valeur, qty, prixHT, prixTTC;
	
	printf("input valeur ?\n");
	scanf("%f", &valeur);
	printf("input quantite ?\n");
	scanf("%f", &qty);
	prixHT = qty * valeur;
	printf("the prixHT is :\n %f\n", prixHT);
	prixTTC = prixHT * 1.196;
	printf("the prixTTC is :\n %f", prixTTC);
	
	return 0;
}
