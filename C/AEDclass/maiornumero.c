#include <stdio.h>
#include <stdlib.h>

	int main (){
		printf("\nIdentifica maior entre dois valores\n");
		
		float A;
		printf("\nDigite o valor: \n");	
		scanf("%f",&A);

		float B;
		printf("\nDigite outro valor: \n");
		scanf("%f",&B);

		float MAIOR;
			if(A > B)
				MAIOR = A;
			else
				MAIOR = B;

		printf("\n O numero maior é: %f", MAIOR);
		return 0;
	}