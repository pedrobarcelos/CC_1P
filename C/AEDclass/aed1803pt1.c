#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	
	printf("\nEscreva na tela os n primeiros termos de uma P.A.\n");

	int n;
	bool ERRO;

	do{
	printf("\nNumero de termos: ");
	scanf("%i",&n);
	ERRO= n < 1;
	if(ERRO) printf("\nQuantidade inválida\a");
	}while(ERRO);

	float termo;
	printf("\nDigite o primeiro termo da P.A.: ");
	scanf("%f",&termo);

	float razao;
	printf("\nDigite a razão da P.A.: ");
	scanf("%f",&razao);

	printf("\nA progressão aritimética será composta pelo seguintes termos:\n");

	int cont = 1;

	while(cont <= n)
	{
		printf("%.1f ",termo);
		termo= termo + razao;
		cont= cont + 1;
	}

	return 0;

}