#include <stdio.h>
main(){
	int num, cont = 1, resp;
	
	printf("Digite o numero: ");
	scanf("%d", &num);
	
	while(cont<=10){
		resp = num*cont;
		printf("%d X %d = %d\n", num, cont,resp);
		cont++;		
	}
	

	
}
