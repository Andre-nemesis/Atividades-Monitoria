#include <stdio.h>

int main() {
    // trabalhando com indices
    // sistema de eleição usando o loop while

    int A = 0, B = 0, C = 0, Nulos = 0, qtdVotos = 0;
    char voto;

    while (1) { // loop infinito
        printf("Informe qual candidato ira votar (A, B, C ou 0 para sair): ");
        scanf(" %c", &voto);

        if (voto == '0') {
            break;
        }

        // Verifica os votos utilizando if e else if
        if (voto == 'a' || voto == 'A') {
            A++;
        } else if (voto == 'b' || voto == 'B') {
            B++;
        } else if (voto == 'c' || voto == 'C') {
            C++;
        } else {
            Nulos++;
        }

        qtdVotos++;
    }

    printf("\nResultado da Eleicao:\n");
    printf("Candidato A: %d votos\t", A);
    printf("Candidato B: %d votos\t", B);
    printf("Candidato C: %d votos\t", C);
    printf("Nulos: %d votos\n", Nulos);
    printf("Quantidade de Votos: %d\n", qtdVotos);

    return 0;
}