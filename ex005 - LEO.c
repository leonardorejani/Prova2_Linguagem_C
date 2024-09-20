#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese_brazil");

    int numeros[10], j;
    int pares = 0, impares = 0;

    printf("Informe 10 números inteiros:\n");

    j = 1;
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", j);
        scanf("%d", &numeros[i]);
        j = j+1;
    }

    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}