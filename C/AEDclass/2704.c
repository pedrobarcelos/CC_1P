#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

 void funcao(int *y)
 {
 	printf("\nY = %p e é o endereco de x.", y);
 	printf("\ne nesse enderco, nessa posicao da memoria ha o valor %i", *y);
 }

int main()
{
	int x = 7;
	printf("\nX = %i e está na posição %p da memória", x, &x);

	funcao(&x);

	return 0;

}