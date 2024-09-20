#include <stdio.h>

int jorge();

int main () {

    jorge();

}

int jorge() {
    
    int n, i;

    for (i = 0; i < 6; i++) {
    
        printf("Numero ");
        scanf("%d", &n);

        if (n%2==0 && n>10){
        printf("Par maior que 10\n");
        }
        else if (n%2==0 && n<10){
        printf("Par menor que 10\n");
        }
        else if (n%2==1 && n<50){
        printf("Impar menor que 50\n");
        }
        else if (n%2==1 && n>50){
            printf("Impar maior que 50\n");
        }
    }

   
}