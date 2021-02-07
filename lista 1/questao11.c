#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura, pideal;
    int genero;
    printf("\nOlá usuário\n");
    printf("\nEsse programa irá calcular o seu peso ideal\n");
    printf("\nPrimeiro, nagora preciso que você me informe o seu peso aqui:\n");
    scanf("%f", &peso);
    printf("\a");
    printf("\nPerfeito, o ultimo passo é me informar a sua altura em metros aqui:\n");
    scanf("%f", &altura);
    printf("\a");

    pideal = ( 72.7 * altura - 58);
    if (pideal < peso) {
        printf("\nVocê está acima do peso ideal\n");
        printf("\nO seu peso: %fkg\n",peso);
        printf("\nO peso ideal para a sua altura: %fkg\n",pideal);
        printf("\a");
        }
        else {
        printf("\nVocê está abaixo do peso ideal\n");
        printf("\nO seu peso: %f""kg\n",peso);
        printf("\nO peso ideal para a sua altura: %fkg\n",pideal);
        printf("\a");
        }
return 0;
}