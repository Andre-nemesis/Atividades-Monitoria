#include <stdio.h>

int main(){
    // faça uma calculadora com as operações (+) (-) (/) (*)

    float num1, num2, result;
    int operacao;

    while(1){
        printf("\nMenu:\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Divisao\n");
        printf("4. Multiplicacao\n");
        printf("0. Sair\n\n");
        scanf("%d",&operacao);

        if (operacao == 1){
            printf("Digite dois numeros: ");
            scanf("%f %f",&num1,&num2);
            result = num1 + num2;
            printf("Resultado: %.2f\n", result);
        }
        else if (operacao == 2){
            printf("Digite dois numeros: ");
            scanf("%f %f",&num1,&num2);
            result = num1 - num2;
            printf("Resultado: %.2f\n", result);
        }
        else if (operacao == 3){
            printf("Digite dois numeros: ");
            scanf("%f %f",&num1,&num2);
            result = num1 / num2;
            printf("Resultado: %.2f\n", result);
        }
        else if (operacao == 4){
            printf("Digite dois numeros: ");
            scanf("%f %f",&num1,&num2);
            result = num1 * num2;
            printf("Resultado: %.2f\n", result);
        }
        else{
            if (operacao!= 0){
                printf("Operação invalida!\n");
            }
            else {
                printf("Ate mais!\n");
                break;
            } 
        }
    }


    return 0;
}