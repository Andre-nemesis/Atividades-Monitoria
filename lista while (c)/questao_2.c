#include <stdio.h>

int main() {
    // somar número enquanto o número não for 0
    int numero, soma = 0;

    // Loop enquanto o número for diferente de 0
    while (numero != 0) {
        // Pede para o usuário digitar um número
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);

        // Adiciona o número à soma (exceto o 0)
        if (numero != 0) {
            soma += numero;
        }
    }

    // Imprime a soma total
    printf("A soma dos numeros e: %d\n", soma);

    return 0;
}