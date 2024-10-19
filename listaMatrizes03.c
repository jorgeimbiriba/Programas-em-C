#include <stdio.h>

main(){
	int i,j,k=0,A;
	int M[3][3];
	int v[k], multA;
	
	printf("Insira os elementos:\n");
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("M[%d][%d]: ",i,j);//Opcional para exibir a posição que o elemento será alocado
			scanf("%d",&M[i][j]);
		}
	}
	
	printf("\nMatriz M:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d",M[i][j]);
		}
		printf("\n");
	}
	
	printf("\nDigite o valor A: ");
	scanf("%d",&A);
	
	//Impressão da Matriz
	printf("\nMatriz multiplicada por A:\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			multA=M[i][j]*A;
			printf("\t%d",multA);
			v[k]=multA;
			k++;
		}
	 printf("\n");	
	}
	
	printf("\n");
	printf("V[9]:");
    for(i=0;i<9;i++){
    	  printf("[%d] ",v[i]);
    }
	
return 0;	   
}
