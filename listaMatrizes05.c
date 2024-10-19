#include <stdio.h>
#include <locale.h>

main(){
	int i,j;
	int M[5][5];
	int aux;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("M[%d][%d]: ",i,j);
			scanf("%d",&M[i][j]);
		}
	}
	
	printf("\nMatriz M original: ");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("\t%d",M[i][j]);
		}
		printf("\n");
	}
	
	//Trocar a linha 2 com a linha 4
	//laço de repetição apenas para o J pois é o único que será incrementado
	for(j=0;j<5;j++){
		aux = M[1][j];
		M[1][j] = M[3][j];
		M[3][i] = aux;
	}
	
	//Trocar a coluna 4 com 5
	for(i=0;i<5;i++){
		aux = M[i][3];
		M[i][3]=M[i][4];
		M[i][4]=aux;
	}
	
	// Troca da diagonal principal com a diagonal secundária
    for (i = 0; i < 5; i++) {
        aux = M[i][i];
        M[i][i] = M[i][5 - 1 - i];
        M[i][5- 1 - i] = aux;
    }
    
    // Troca da linha 3 com a coluna 1
    for (i = 0; i < 5; i++) {
        aux = M[2][i];
        M[2][i] = M[i][0];
        M[i][0] = aux;
    }
	printf("................................\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("\t%d",M[i][j]);
		}
		printf("\n");
	}
return 0;	
}
