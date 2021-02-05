#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
 
 int main()
 {
 	printf("\nCalcular o maior valor dentre dez números naturais lidos.");

 	int x;
 	int i = 0;
 	int maior = 0;
 	bool ERRO;

 	while(i<10)
 	{
 		do{
 			printf("\nDigite o valor: ");
 			scanf("%i",&x);
 			ERRO= x < 1;
 			if(ERRO)printf("\nDigite apenas valores positivos\n\a");
 		}while(ERRO);
 		if(x > maior) maior = x;
 		i = i + 1;
 	}

 	printf("\nO maior valor = %i",maior);
 	return 0;
 }