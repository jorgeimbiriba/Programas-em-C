#include <stdio.h>

main(){
	int i,j;
    int M[5][5], SL[5]={0,0,0,0,0},SC[5]={0,0,0,0,0};
    //Os vetores tiveram que ser inicializados zerados para o programa funcionar perfeitamente
    //Funciona pra vetores e matrizes pr� definidas
    
	printf("Insira os elementos da Matriz M:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("M[%d][%d]: ", i, j);//Opcional para exibir a posi��o que o elemento ser� alocado
			scanf("%d",&M[i][j]);
		}
    }
    
    printf("\nMatriz M\n");
    for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		printf("\t%d",M[i][j]);
		}
		printf("\n");
	}
	
	//Somat�rio dos elementos das linhas
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			SL[i] += M[i][j];
			SC[j] += M[i][j];
		}
	}
	
	//Impress�o do Vetor SL
	printf("\nVetor SL: ");
	for(i=0;i<5;i++){
		printf("[%d]",SL[i]);
	}
	printf("\n");
	
	//Impress�o do Vetor SC
	printf("\nVetor SC: ");
	for(i=0;i<5;i++){
		printf("[%d]",SC[i]);
	}
	
	
	return 0;
}


