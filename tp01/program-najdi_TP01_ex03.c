// Algorithme ConversionEuro (TP01_ex03)

#include <stdio.h>
// #include <ctype.h>

int main()
{
	//declaration inside function main()
	float bef, euro;
	
	printf("input the amount in BEF \n");
	scanf("%f", &bef);
	euro = bef / 40.3;
	printf("you have BEF %f and it is equal to EURO %f \n", bef, euro);

    return 0;
}
