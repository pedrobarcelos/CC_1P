#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main ()
{
	float X;
	float maior = 0;
	int i;

	printf("\nMaior valor dentre cinco valores positivos lidos");
	
	for ( i=1; i<=5; i++)
	{
		printf("\nValor: ");
		scanf("%f",&X);
		if(X > maior) maior = X;
	}

	printf("\nO valoe da variável i = %i", i);
	printf("\nMaior = %f", maior);

	return 0;
}