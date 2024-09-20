#include <stdio.h>

void teste(float n,float md);

int main()
{

	int i;
	float n,md;

	printf("Informe!\n");

	for (i = 1; i < 6; i++) {
        
        printf("Aluno %d \n",i);
        
		teste(n, md);
	}
}

void teste(float n,float md) {
	int x = 0;
    n  = 0;
    md = 0;
    float st = 0;
    
    for (x=1;x <= 2;x++){
        
        printf("Nota %d: ",x);
        scanf("%f",&n);
        st = st + n;
    }
    
    md = st / 2;
    
    printf("Media: %f \n",md);
    
    if (md>=7) {
		printf("Aprovado\n");
		printf(" \n");
	} else if(md>=5 && md<=6.9) {
		printf("Recuperação\n");
		printf(" \n");
	} else if(md<=4.9) {
		printf("Reprovado\n");
		printf("\n");
	}
}