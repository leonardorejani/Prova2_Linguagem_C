#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        // Exibe o menu de opera��es
        printf("\nMenu:\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Se a op��o escolhida for de 1 a 4, pedir dois n�meros
        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcao) {
            case 1:
                // Adi��o
                resultado = num1 + num2;
                printf("Resultado da adicao: %.2f\n", resultado);
                break;
            case 2:
                // Subtra��o
                resultado = num1 - num2;
                printf("Resultado da subtracao: %.2f\n", resultado);
                break;
            case 3:
                // Multiplica��o
                resultado = num1 * num2;
                printf("Resultado da multiplicacao: %.2f\n", resultado);
                break;
            case 4:
                // Divis�o, verificando se o divisor � diferente de zero
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado da divisao: %.2f\n", resultado);
                } else {
                    printf("Erro: divisao por zero nao permitida.\n");
                }
                break;
            case 5:
                // Sair do programa
                printf("Saindo...\n");
                break;
            default:
                // Op��o inv�lida
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}

