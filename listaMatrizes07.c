#include <stdio.h>

main(){
	int i,j,A ;
	int V[4][4];
	int cont = 0, k = 0 , X [16];
	
	printf("Digie um numero inteiro A: ");
	scanf("%d",&A);
	
	printf("\nDigite os elementos da matriz V:\n");
	for (i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("V[%d][%d]",i,j);
			scanf("%d",&V[i][j]);
			if(V[i][j]==A){
				cont++;
			}else
			  X[k] = V[i][j]; 
			  k++;
		}
	}
	
	printf("\nMatriz V:\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("\t%d",V[i][j]);
		}
		printf("\n");
	}
	
	printf("\nO valor %d aparece %d vezes na matriz.\n", A,cont );
	
	printf("\nVetor X com todos os elementos diferentes de A: ");
	for(i=0;i<k;i++){
		printf("[%d] ",X[i]);
	}
	
return 0;
}
