#include <stdio.h>

int main() {
    
    float nota, peso, ponderadatotal = 0.0;
    float pesostotal = 0.0;
    float mediapondealuno;

    for (int i = 1; i <= 5; i++) {
        printf("Aluno %d:\n", i);

        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        printf("Digite o peso da nota do aluno %d: ", i);
        scanf("%f", &peso);

        mediapondealuno = nota * peso;

        printf("Média ponderada do aluno %d: %.2f\n", i, mediapondealuno);

        ponderadatotal += mediapondealuno;
        pesostotal += peso;
    }

    float mediaponturma = ponderadatotal / pesostotal;

    printf("\nMédia ponderada final da turma: %.2f\n", mediaponturma);

    return 0;
}
