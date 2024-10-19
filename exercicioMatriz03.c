#include <stdio.h>
#include <locale.h>

main(){
	int i,j;
	int M [4][3];
	int somaLinhasPares = 0, somaColunasImpares = 0;
	//[4]={0,0,0,0};

	
	printf("Digite os Elementos da Matriz A:\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			scanf("%d",&M[i][j]);
		}
	}
	
	printf("\nMatriz A:\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
		printf("\t%d",M[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i < 4; i++) {
        int somaLinha = 0;
        for ( j = 0; j < 3; j++) {
            somaLinha += M[i][j];
            if (i % 2 == 0) {
                somaLinhasPares += M[i][j];
            }
            if (j % 2 == 1) {
                somaColunasImpares += M[i][j];
            }
        }
        printf("A soma da linha %d : %d\n", i, somaLinha);
    }

    printf("Soma das linhas pares: %d\n", somaLinhasPares);
    printf("Soma das colunas impares: %d\n", somaColunasImpares);
	
return 0;	
}
