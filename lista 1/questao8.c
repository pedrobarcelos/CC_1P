#include <stdlib.h>
#include <stdio.h>

int main () {
	float x,z;
    printf("\nEsse programa pode calcular a área de qualquer quadrado.\n");
    printf("\nÉ necessário que você me informe aqui a medida em cm do lado de um quadrado:\n");
    scanf("%f",&x);
    printf("\a");
    z = (x * x);
    printf("\nA área desse retângulo é: %fcm",z);
    return 0;
}