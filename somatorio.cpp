#include <stdio.h>

main(){
	int vet[5];
	int somaT = 0; //acumulador
	
	for (int i = 0; i < 5 ; i++ ){
		scanf("%d", &vet[i]);
		somaT = somaT + vet[i];
	}
	
	printf("%d", somaT);
}
