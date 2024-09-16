#include <stdio.h>

int main(){
    // faça um programa que verifique se um número é primo ou não

    int numero;

    while(1){
        printf("\nDigite um numero inteiro (0 para parar): ");
        scanf("%d",&numero);
        if (numero == 0){
            break;
        }
        if (numero % 2  == 0){
            printf("O numero %d nao e primo.\n", numero);
            continue;
        }
        else{
            printf("O numero %d e primo!\n",numero);
        }
    }


    return 0;
}