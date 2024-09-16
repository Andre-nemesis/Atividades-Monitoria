#include <stdio.h>

int main(){
    // organizador de números
    // pedir 3 números para que sejam organizados de forma decresente

    int num1, num2, num3;

    while (1){
        printf("Digite o primeiro numero (0 para parar): ");
        scanf("%d", &num1);

        if (num1 == 0){
            printf("Ate mais");
            break;
        }

        printf("Digite o segundo numero (0 para parar): ");
        scanf("%d", &num2);

        if (num2 == 0){
            printf("Ate mais");
            break;
        }

        printf("Digite o terceiro numero (0 para parar): ");
        scanf("%d", &num3);

        if (num3 == 0){
            printf("Ate mais");
            break;
        }

        if (num1 > num2 && num1 > num3 && num2 > num3){
            printf("Os numeros organizados em ordem decrescente sao: %d, %d, %d\n", num1, num2, num3);            
        }

        else if (num1 > num2 && num1 > num3 && num3 > num2){
            printf("Os numeros organizados em ordem decrescente sao: %d, %d, %d\n", num1, num3, num2);            
        }

        else if (num2 > num1 && num2 > num3 && num1 > num3){
            printf("Os numeros organizados em ordem decrescente sao: %d, %d, %d\n", num2, num1, num3);            
        }

        else if (num2 > num2 && num2 > num3 && num3 > num1){
            printf("Os numeros organizados em ordem decrescente sao: %d, %d, %d\n", num2, num3, num1);            
        }

        else if (num3 > num1 && num3 > num2 && num1 > num2){
            printf("Os numeros organizados em ordem decrescente sao: %d, %d, %d\n", num3, num1, num2);            
        }

        else {
            printf("Os numeros organizados em ordem decrescente sao: %d, %d, %d\n", num3, num2, num1);            
        }

    }

    return 0;
}