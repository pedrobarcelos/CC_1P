#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float c,f;
    printf("\nOlá usuário.\n");
    printf("\nSeja bem vindo ao seu conversor de grau Celsius para grau Fahrenheit!\n");
    printf("\nInsira um valor em graus Celsius:\n");
    scanf("%f",&c);
    f = (9 * c) / 5 + 32;
    printf("\nValor convertido para Fahrenheit: %fgraus.",f);

return 0;

}
