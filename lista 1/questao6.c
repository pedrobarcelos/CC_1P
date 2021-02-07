#include <stdio.h>
#include <stdlib.h>

int main()
{
	float peso, altura, pideal;
	char genero;
	printf("\nOlá usuário\n");
	printf("\nEsse programa irá calcular o seu peso ideal\n");
	printf("\nPrimeiro, nos informe o seu genero. Digite ""m"" para masculino e ""f"" se for feminino:\n");
	scanf("%c", &genero);
		while (genero != 'f' && genero != 'm')
		{
			printf("\nVocê inseriu um valor inválido para o seu gênero. Insira um valor válido:\n");
			scanf("%c", &genero);
		}
	printf("\nÓtimo, agora preciso que você me informe o seu peso aqui:\n");
	scanf("%f", &peso);
	printf("\nPerfeito, o ultimo passo é me informar a sua altura em metros aqui:\n");
	scanf("%f", &altura);
   if (genero == 'm') {
	pideal = ( 72.7 * altura - 58);
	if (pideal < peso) {
		printf("\nVocê está acima do peso ideal\n");
		printf("\nO seu peso: %f""kg\n",peso);
		printf("\nO peso ideal para a sua altura: %f""kg\n",pideal);
		}
		else 
		{
		printf("\nVocê está abaixo do peso ideal\n");
		printf("\nO seu peso: %f""kg\n",peso);
		printf("\nO peso ideal para a sua altura: %f""kg\n",pideal);
	}
}
if (genero == 'f') {
	pideal = (62.1 * altura) - 44.7;
	if (pideal < peso) {
		printf("\nVocê está acima do peso ideal\n");
		printf("\nO seu peso: %f""kg\n",peso);
		printf("\nO peso ideal para a sua altura: %f""kg\n",pideal);
	}
	else 
	{
	printf("\nVocê está abaixo do peso ideal\n");
	printf("\nO seu peso: %f""kg\n",peso);
	printf("\nO peso ideal para a sua altura: %f""kg\n",pideal);
	}
}


return 0;
}