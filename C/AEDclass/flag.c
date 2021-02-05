#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
	printf("\nCalcular reajuste de salarios.\n");

	bool ERRO;
	float salario;
	const float flag = 0;

	do{
		printf("\nDigite salario: ");
		scanf("%f",&salario);
		ERRO = salario < 0;
		if(ERRO) printf("\nApenas salarios positivos.\n");
	}while(ERRO);

	float reajuste;

	while(salario != flag)
	{
		if(salario<1000) reajuste = salario * 0.1; //Reajuste de 10%
		else if (salario<=2000) reajuste = salario * 0.08; //Reajuste de 8%
			else reajuste = salario * 0.07; //Reajuste de 7%

		salario = salario + reajuste;

		printf("\nReajuste de R$%.2f.\nNovo salario = R$%.2f\n",reajuste,salario);


	
		do{
			printf("\nDigite salario: ");
			scanf("%f",&salario);
			ERRO = salario < 0;
			if(ERRO) printf("\nApenas salarios positivos.\n");		
		}while(ERRO);
	}

	return 0;
}