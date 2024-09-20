 #include <stdio.h>

void teste(int n);

int main()
{

	int n,i;

	printf("Informe!\n");

	for (i = 0; i < 10; i++) {

		printf("Idade: ");
		scanf("%d",&n);
		teste(n);
	}


}

void teste(int n) {
	


	if (n>=0 && n<=12 ) {
		printf("Criança\n");
		printf(" \n");
	} else if(n>=13 && n<=17) {
		printf("Adolecente\n");
		printf(" \n");
	} else if(n>=18 && n<=64) {
		printf("Adulto(a)\n");
		printf(" \n");
	} else if(n>=65) {
		printf("Idoso(a)\n");
		
	}

}