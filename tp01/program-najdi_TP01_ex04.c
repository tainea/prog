// Algorithme Decompose (TP01_ex04)

#include <stdio.h>

int main()
{
	double montant, reste1, reste2, reste3;
    int nbDixEuro, nbDeuxEuro, nbUnEuro;

    printf("input your amount ?\n");
	scanf("%lf", &montant);
	
	nbDixEuro = montant / 10;
	reste1 = montant - nbDixEuro * 10;

	nbDeuxEuro = reste1 / 2;
	reste2 = reste1 - nbDeuxEuro * 2;
	
	nbUnEuro = reste2 / 1;	
	reste3 = reste2 - nbUnEuro * 1;
	
	printf("your input amount EUR %lf can be decomposed into :\n", montant);
	printf("%d billets de 10E \n", nbDixEuro);
	printf("%d pieces de 2E \n", nbDeuxEuro);
	printf("%d pieces de 1E \n", nbUnEuro);
	printf("and the remaining is EUR %lf", reste3);

	return 0;
}

// % works with int only
