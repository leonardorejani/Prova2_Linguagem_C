#include <stdio.h>

void teste(int n);

int main()
{

	int n,i;

	printf("Informe!\n");

	for (i = 0; i < 8; i++) {

		printf("Nota: ");
		scanf("%d",&n);
		teste(n);
	}


}

void teste(int n) {
	


	if (n>=9 && n<=10 ) {
		printf("Classificação: A\n");
	} else if(n>=7 && n<=8.9) {
		printf("Classificação: B\n");
	} else if(n>=5 && n<=6.9) {
		printf("Classificação: C\n");
	} else if(n>=3 && n<=4.9) {
		printf("Classificação: D\n");
	}else if(n<3) {
		printf("Classificação: F\n");
	}


}