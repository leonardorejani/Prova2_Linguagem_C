#include <stdio.h>

int main() {
    int numero, soma_divisores = 0;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    if (numero <= 0) {
        printf("O número deve ser positivo.\n");
        return 1; 
    }
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            soma_divisores += i;
        }
    }
    if (soma_divisores == numero) {
        printf("%d é um número perfeito.\n", numero);
    } else {
        printf("%d não é um número perfeito.\n", numero);
    }

    return 0;
}