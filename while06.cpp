#include <stdio.h>

main(){
	int cont = 0, base, exp, expoabs;
	double resp = 1.0;
	
	printf("Digite a base: ");
	scanf("%d", &base);
	
	printf("Digite o expoente: ");
	scanf("%d", &exp );
	
	expoabs = exp<0 ? -exp : exp;
	
	while (cont<expoabs){
		resp = resp*base;
		cont++;
	}
	
	if(exp<0){
		resp = 1.0/resp;
	}
	
	printf("%d^%d = %.10g\n",base,exp,resp);
}
