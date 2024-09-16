#include <stdio.h>

void main(){
    // informe números até que o número seja o valor para parar o loop
    int num = 0; // iniciando variavel como 0

    while(num!=5) { // condição para que o loop continue
        printf("Informe um numero: ");
        scanf("%d", &num);
    }
}