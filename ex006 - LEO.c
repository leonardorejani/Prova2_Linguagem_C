#include <stdio.h>
#include <locale.h>

int ehPrimo(int i) {
    if (i < 2) {
        return 0; 
    }
    for (int j = 2; j <= i / 2; j++) {
        if (i % j == 0) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    setlocale(LC_ALL, "portuguese_brazil");

    int ni, nf, i;
    int encontrouPrimo = 0;

    printf("Informe um n�mero inicial: ");
    scanf("%d", &ni);

    printf("Informe um n�mero final: ");
    scanf("%d", &nf);

    printf("N�meros primos no intervalo entre %d e %d:\n", ni, nf);

    for (i = ni; i <= nf; i++) {
        if (ehPrimo(i)) {  
            printf("%d ", i);
            encontrouPrimo = 1; 
        }
    }

    if (!encontrouPrimo) {
        printf("N�o h� n�meros primos nesse intervalo.\n");
    }

    printf("\n");
    return 0;
}
