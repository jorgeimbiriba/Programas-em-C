#include <stdio.h>

main(){
	int cont = 15, resp;
	while (cont<=35){
		resp = cont*cont;
		printf("\nO quadrado de %d se trata de %d", cont,resp);
		cont++;
	}
}
