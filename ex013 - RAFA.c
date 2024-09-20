#include <stdio.h>

float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float fahrenheitParaCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int opcao;
    float temperatura, resultado;

    do {
        // Exibe o menu
        printf("\nMenu:\n");
        printf("1. Converter de Celsius para Fahrenheit\n");
        printf("2. Converter de Fahrenheit para Celsius\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                // Converte de Celsius para Fahrenheit
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                resultado = celsiusParaFahrenheit(temperatura);
                printf("%.2f Celsius equivale a %.2f Fahrenheit\n", temperatura, resultado);
                break;
            case 2:
                // Converte de Fahrenheit para Celsius
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);
                resultado = fahrenheitParaCelsius(temperatura);
                printf("%.2f Fahrenheit equivale a %.2f Celsius\n", temperatura, resultado);
                break;
            case 3:
                // Sai do programa
                printf("Saindo...\n");
                break;
            default:
                // Op��o inv�lida
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while(opcao != 3);

    return 0;
}

