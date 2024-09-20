#include <stdio.h>

int calcularFatorial(int n) {
    int fatorial = 1;
    for (int i = 1; i <= n; i++){
        fatorial *= i;  // Multiplica fatorial pelos n�meros de 1 at� n
    }
    return fatorial;
}

int main() {
    int opcao, numero;

    do {
        // Exibe o menu
        printf("\nMenu:\n");
        printf("1. Calcular o fatorial de um numero\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Solicita o n�mero para calcular o fatorial
                printf("Digite um numero inteiro: ");
                scanf("%d", &numero);

                // Verifica se o n�mero � n�o negativo
                if (numero < 0) {
                    printf("Fatorial nao definido para numeros negativos.\n");
                } else {
                    // Calcula e exibe o fatorial
                    int resultado = calcularFatorial(numero);
                    printf("O fatorial de %d e: %d\n", numero, resultado);
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

