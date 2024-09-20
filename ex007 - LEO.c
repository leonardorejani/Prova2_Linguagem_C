#include <stdio.h>
#include <locale.h>

void julia();  

int main() {
    setlocale(LC_ALL, "portuguese_brazil");

    printf("Informe a nota dos alunos\n\n");
    julia();

    return 0;
}

void julia() {
    float notas[5];  
    int i;

    for (i = 0; i < 5; i++) {
        printf("Nota do %dº aluno: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for (i = 0; i < 5; i++) {
        if (notas[i] >= 7.0) {
            printf("\nO %dº aluno está aprovado com média de %.2f\n", i + 1, notas[i]);
        } else {
            printf("\nO %dº aluno está reprovado com média de %.2f\n", i + 1, notas[i]);
        }
    }
}


/*#include <stdio.h>
#include <locale.h>

void julia();  // Função que faz a leitura e exibe a aprovação ou reprovação dos alunos

int main() {
    setlocale(LC_ALL, "portuguese_brazil");

    printf("Informe a nota dos alunos\n\n");
    julia();

    return 0;
}

void julia() {
    float notas[5];  // Array para armazenar as notas dos 5 alunos
    int i;

    // Laço para coletar as notas de cada aluno
    for (i = 0; i < 5; i++) {
        printf("Nota do %dº aluno: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Laço para verificar a aprovação ou reprovação de cada aluno
    for (i = 0; i < 5; i++) {
        if (notas[i] >= 7.0) {
            printf("\nO %dº aluno está aprovado\n", i + 1);
        } else {
            printf("O %dº aluno está reprovado\n", i + 1);
        }
    }
}
*/