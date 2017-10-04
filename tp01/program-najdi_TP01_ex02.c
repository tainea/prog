// Algorithme SommeNombres (TP01_ex02) 

#include <stdio.h>
// #include <ctype.h>

int main()
{
	float nb1, nb2, nb3, somme;

    printf("input 1st number ?\n");
    scanf("%f", &nb1);
    printf("input 2nd number ?\n");
    scanf("%f", &nb2);
    printf("input 3rd number ?\n");
    scanf("%f", &nb3);
    
    somme = nb1 + nb2 + nb3;
    
    printf("the sum of the 3 numbers is :\n");
    printf("%f", somme);
    
    return 0;
}
