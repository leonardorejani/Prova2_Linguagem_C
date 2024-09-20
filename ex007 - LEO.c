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
        printf("Nota do %d� aluno: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for (i = 0; i < 5; i++) {
        if (notas[i] >= 7.0) {
            printf("\nO %d� aluno est� aprovado com m�dia de %.2f\n", i + 1, notas[i]);
        } else {
            printf("\nO %d� aluno est� reprovado com m�dia de %.2f\n", i + 1, notas[i]);
        }
    }
}


/*#include <stdio.h>
#include <locale.h>

void julia();  // Fun��o que faz a leitura e exibe a aprova��o ou reprova��o dos alunos

int main() {
    setlocale(LC_ALL, "portuguese_brazil");

    printf("Informe a nota dos alunos\n\n");
    julia();

    return 0;
}

void julia() {
    float notas[5];  // Array para armazenar as notas dos 5 alunos
    int i;

    // La�o para coletar as notas de cada aluno
    for (i = 0; i < 5; i++) {
        printf("Nota do %d� aluno: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // La�o para verificar a aprova��o ou reprova��o de cada aluno
    for (i = 0; i < 5; i++) {
        if (notas[i] >= 7.0) {
            printf("\nO %d� aluno est� aprovado\n", i + 1);
        } else {
            printf("O %d� aluno est� reprovado\n", i + 1);
        }
    }
}
*/