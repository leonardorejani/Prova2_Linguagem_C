#include <stdio.h>

int main() {
    int opcao, numero , i;

    do {
        // Exibe o menu
        printf("\nMenu:\n");
        printf("1. Gerar a tabuada de um numero\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Solicita o n�mero para gerar a tabuada
                printf("Digite o numero para gerar a tabuada: ");
                scanf("%d", &numero);

                // Gera e exibe a tabuada de 1 a 10
                printf("Tabuada de %d:\n", numero);
                for (int i = 1; i <= 10; i++) {
                    printf("%d x %d = %d\n", numero, i, numero * i);
                }
                break;
            case 2:
                // Op��o de sair
                printf("Saindo...\n");
                break;
            default:
                // Op��o inv�lida
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (opcao != 2);

    return 0;
}

