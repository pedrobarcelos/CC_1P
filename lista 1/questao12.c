#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float peso, altura, pideal;
    int genero;
    
    printf("\nOlá usuário\n");
    printf("\nEsse programa irá calcular o seu peso ideal\n");
    printf("\nPrimeiro, nagora preciso que você me informe o seu peso aqui:\n");
    scanf("%f", &peso);
    printf("\nPerfeito, o ultimo passo é me informar a sua altura em metros aqui:\n");
    scanf("%f", &altura);

    pideal = ( 62.1 * altura - 44.7);
    if (pideal < peso) {
        printf("\nVocê está acima do peso ideal\n");
        printf("\nO seu peso: %fkg\n",peso);
        printf("\nO peso ideal para a sua altura: %fkg\n",pideal);
        }
        else {
        printf("\nVocê está abaixo do peso ideal\n");
        printf("\nO seu peso: %f""kg\n",peso);
        printf("\nO peso ideal para a sua altura: %fkg\n",pideal);
        }
return 0;
}