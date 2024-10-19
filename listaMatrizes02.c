#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b,N;

	printf("Insira a quantidade de linhas e colunas: ");
	scanf("%d",&N);
	
	int A[N][N],maior;
	printf("\nInsira os elementos da matriz:\n");
	for(a=0;a<N;a++){
		for(b=0;b<N;b++){
			scanf("%d",&A[a][b]);
		}
	}
	
	printf("\nMatriz A\n");
	for(a=0;a<N;a++){
		for(b=0;b<N;b++){
			printf("\t%d",A[a][b]);
		}
	  printf("\n");	
	}
    
    maior = A[0][0];
    for(a=0;a<N;a++){
    	for(b=0;b<N;b++){
    		if(A[a][b]>maior){
    			maior=A[a][b];
			}
		}
	}
	
	printf("\nMaior elemento da matriz: %d", maior);
	
	printf("\nElementos da Diagonal Principal: ");
	for(a=0;a<N;a++){
		for(b=0;b<N;b++){
			if(a==b){
				printf("\n%d",A[a][b]);
			}	
		}
	}
	
	printf("\nMultiplicação do maior elemento pelos elementos da diagonal principal: ");
	for (a=0;a<N;a++){
		for(b=0;b<N;b++){
			if(a==b){
				printf("\n%d x %d = %d",maior,A[a][b],A[a][b]*maior);
			}
		}
	}
	
	
 return 0;	
}
