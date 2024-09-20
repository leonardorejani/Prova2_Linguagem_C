#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite, tentativas = 7;

    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1;  // Sorteia um número entre 1 e 100

    printf("Tente adivinhar o numero secreto (entre 1 e 100). Voce tem 7 tentativas.\n");

    for (int i = 1; i <= tentativas; i++) {
        printf("Tentativa %d: ", i);
        scanf("%d", &palpite);

        if (palpite == numeroSecreto) {
            printf("Parabens! Voce acertou o numero %d!\n", numeroSecreto);
            return 0;  // Encerra o programa
        } else if (palpite < numeroSecreto) {
            printf("O numero secreto e maior!\n");
        } else {
            printf("O numero secreto e menor!\n");
        }
    }

    // Se o laço for concluído, o jogador não acertou
    printf("Suas tentativas acabaram. O numero secreto era %d.\n", numeroSecreto);

    return 0;
}
