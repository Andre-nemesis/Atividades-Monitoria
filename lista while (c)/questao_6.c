#include <stdio.h>

int main()
{
    /*
    solicite ao usuário um número inteiro e
    imprima a tabuada de multiplicação desse número
    até um limite também definido pelo usuário.
    */

    int numero, limite, contador = 0, multiplicacao;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    printf("Informe um limite para a tabuada: ");
    scanf("%d", &limite);

    printf("\nTabuada de %d:\n", numero);
    while (contador <= limite){
        multiplicacao = numero * contador;
        printf("%d x %d = %d\n", contador,numero,multiplicacao);
        contador++;
    }

    return 0;
}