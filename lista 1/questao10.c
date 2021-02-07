#include <stdlib.h>
#include <stdio.h>

int main () {
    float x, y, z;
    printf("\nEsse programa pode calcular o perímetro de qualquer retângulo\n");
    printf("\nÉ necessário que você me informe aqui a medida em cm da base de um retângulo:\n");
    scanf("%f",&x);
    printf("\a");
    printf("\nÓtimo, agora preciso que você me informe aqui a medida em cm da altura desse retângulo:\n");
    scanf("%f",&y);
    printf("\a");
    z = (2*x)+(2*y);
    printf("\nO perímetro desse retângulo é: %fcm",z);
    return 0;


}
