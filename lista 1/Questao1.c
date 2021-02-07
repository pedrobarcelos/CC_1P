#include <stdio.h>
#include <stdlib.h>

int main()
{
	float base,
		  altura,
		  perímetro;

	printf("\nEsse programa vai calcular o perímetro de um retângulo\n");
	printf("\nInforme aqui a medida em metros da base do retângulo:\n");
	scanf("%f",&base);
	printf("\nAgora informe aqui a medida em metros da altura do retângulo:\n");
	scanf("%f",&altura);
	perímetro = (2*base) + (2*altura);
	printf("\nPerímetro = %f"" metros",perímetro);
return 0;
}