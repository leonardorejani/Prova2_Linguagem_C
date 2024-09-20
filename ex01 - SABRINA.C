 #include <stdio.h>
 #include <math.h>

    int main() {
       
        float valorinicial, txjuros, valorfinal;
        int anos, ano = 1;
        
        printf("Digite o valor inicial do investimento: ");
        scanf("%f", &valorinicial);

        printf("Digite a taxa de juros anual (em porcentagem usando ponto): ");
        scanf("%f", &txjuros);

        printf("Digite o número de anos que o dinheiro será investido: ");
        scanf("%d", &anos);
        txjuros = txjuros / 100.0;
        printf("\nAno\tValor do Investimento\n");

        while (ano <= anos) {
            valorfinal = valorinicial * pow(1 + txjuros, ano);
            printf("%d\t%.2f\n", ano, valorfinal);
            ano++;
        }
        
    }