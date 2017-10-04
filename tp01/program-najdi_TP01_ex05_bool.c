// Algorithme Booléen (TP01_ex05)

#include <stdio.h>

int main()
// int main() {... return 0;}
// void main() {... ;}

{
	int a, b;
    int b1, b2, b3, b4;

    printf("input a\n");
    scanf("%d", &a);
    printf("input b\n");
    scanf("%d", &b);
    
    b1 = (10>10) && (5==5);
	b2 = (a==10) || (b==5) || (3==6);
	b3 = (a>b) && ((5==5) || (b<a));
	b4 = ((0) && (1)) || (a>b);
	
	// printf("%d\n%d\n%d\n%d\n" , b1, b2, b3, b4);
	printf("b1 = ... %s\n", (b1==0 ? "Faux" : "Vrai"));
	printf("b2 = ... %s\n", (b2==0 ? "Faux" : "Vrai"));
	printf("b3 = ... %s\n", (b3==0 ? "Faux" : "Vrai"));
	printf("b4 = ... %s\n", (b4==0 ? "Faux" : "Vrai"));

	return 0;
}

//??? ("... %s", (bool1 == 0) ? "F" : "T")
//??? ||
