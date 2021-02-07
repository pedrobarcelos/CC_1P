#include <stdlib.h>
#include <stdio.h>

int main () {
    
    float x,y;
    float z = 3.14;
    
    printf("\nEsse programa pode calcular a área de qualquer círculo.\n");
    printf("\nÉ necessário que você me informe aqui a medida em cm do raio de um círculo:\n");
    scanf("%f",&x);
    printf("\a");
    y = (x * x) * (z);
    printf("\nA área desse círculo é: %fcm",y);
    
    return 0;


}
