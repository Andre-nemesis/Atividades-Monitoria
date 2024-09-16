#include <stdio.h>

void main() {
    // verificar a idade de uma pessoa, caso a idade seja negativa parar o loop
    int idade;

    while(1){
        printf("Digite a idade: ");
        scanf("%d", &idade);
        if (idade == 0) {
            break;
        }
        if (idade>=18 && idade<65){
            printf("Maior de idade!\n\n");
        }
        else if(idade<18 && idade>=0){
            printf("Menor de idade!\n\n");
        }
        else if(idade>=65){
            printf("Idoso!\n\n");
        }
    }

}