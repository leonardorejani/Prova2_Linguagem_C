#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese_brazil");

    int numeros[10], j;
    int pares = 0, impares = 0;

    printf("Informe 10 n�meros inteiros:\n");

    j = 1;
    for (int i = 0; i < 10; i++) {
        printf("N�mero %d: ", j);
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

    printf("Quantidade de n�meros pares: %d\n", pares);
    printf("Quantidade de n�meros �mpares: %d\n", impares);

    return 0;
}