#include <stdio.h>

main(){
	int p,i,primXult,segXpenul,tercXterc,penultXseg,ultXprim;
	
	printf("Insira a quantidade de posicoes dos Vetores A e B: ");
	scanf("%d",&i);
	if (i <= 0) {
        printf("O número de posições deve ser maior que zero.\n");
        return 1; 
    }
    
	int A[i],B[i];//Declarado após os scanf por conta de erros com as posições dos elementos
	printf("\nElementos da Matriz A:\n");
	for(p=0;p<i;p++){
		scanf("%d",&A[p]);
	}
	
	printf("\nElementos da Matriz B:\n");
	for(p=0;p<i;p++){
		scanf("%d",&B[p]);
	}
 
	//Primeiro menos o último
	primXult=A[0]-B[i-1];
	printf("\n%d - %d :%d",A[0],B[i-1],primXult);
	
	//Segundo pelo penúltimo
	segXpenul=(A[1]-B[i-2]);
	printf("\n%d - %d :%d",A[1],B[i-2],segXpenul);	
	printf("\n");

    //Elementos da mediana
    if(i%2==0){
    	tercXterc= A[(i/2)-1]-B[(i/2)-1];
	}else{
		tercXterc= A[(i-1)/2]-B[(i-1)/2];
	}
	
	printf("\n%d - %d :%d",A[(i-1)/2],B[(i-1)/2],tercXterc);	
	printf("\n");
	
	if(i%2==0){
		penultXseg= A[(i/2)+1]-B[1];
	}else{
		penultXseg= A[i-1]-B[1];
	}
	
	printf("\n%d - %d :%d",A[(i/2)+1],B[1],penultXseg);	
	printf("\n");
	
	
	ultXprim=A[i-1]-B[0];
	printf("\n%d - %d :%d",A[i-1],B[0],ultXprim);
	
	//Impressão do vetor
	printf("\nVetor A:");
	for(p=0;p<i;p++){
		printf("\t[%d]",A[p]);
	}
	printf("\nVetor B:");
	for(p=0;p<i;p++){
		printf("\t[%d]",B[p]);
	}
return 0;	
}
