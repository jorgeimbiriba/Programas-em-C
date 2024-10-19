#include <stdio.h>

main(){
	int  i=3, j=3 , A[i][j];
	int k = 0,v[k];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&A[i][j]);	
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d",A[i][j]);
			v[k]=A[i][j];
			k++;
		}
		printf("\n");
	}
	
	
	printf("\nVetor V:");
	for (i=0;i<k;i++){
		printf("[%d]",v[i]);
	}
return 0;	
}
