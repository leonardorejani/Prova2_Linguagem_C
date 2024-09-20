/*
4. Escreva um programa que solicite ao usuário um número decimal e um valor de
base de conversão (entre 2 e 16). O programa deve converter o número decimal
para a base desejada e exibir o resultado. Utilize um laço para realizar a conversão.
(0.1 ponto)
Entradas: número decimal, base de conversão.
Saída: número convertido para a base escolhida.
*/

#include <stdio.h>
int main(){

    float num;
    int i, base, int_decimal, resto;
    char result[32];

    printf("Informe um valor decimal: ");
    scanf("%f", &num);
    printf("Informe um valor de base entre 2 e 16: ");
    scanf("%d", &base);
    while(base < 2 || base > 16){
        printf("Informe um valor entre 2 e 16: ");
        scanf("%d", &base);
    }

    
    //isso aqui pega a parte inteira do num
    int_decimal = (int)num;
    
    
    i = 0;
    do{
        resto = int_decimal % base; 
        //resto de 0 a 9 é representado como um caractere numérico
        // se o resto é maior que 9 ele entra no grupo de base que usam letras (A 10, B 11, etc.)
        if (resto < 10) {
            result[i] = resto + '0';
        } else {
            result[i] = resto - 10 + 'A';
        } 
        
        int_decimal = int_decimal / base;
        i++;
    }while(int_decimal > 0);

    
    for (i = i - 1; i >= 0; i--) {
        printf("%c", result[i]); 
    }
     
    return 0;
}