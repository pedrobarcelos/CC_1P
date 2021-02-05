#include <stdio.h>
#include <stdlib.h>

void apresentacao()
{
	printf("\nOlá!");
	printf("\nSoma de dois números.");
}
float leiareal()
{
	float X;
	printf("\nDigite um número real: ");
	scanf("%f", &X);
	return X;
}
int main()
{
	apresentacao();
 	
 	float A = leiareal();
 	float B = leiareal();
	float soma = A + B;

	printf("\nSoma = %.2f",soma);
	return 0;
}