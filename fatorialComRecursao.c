#include <stdio.h>
#include <locale.h>

int fat(int n){
	if (n==0){
		return 1;
	}else {
		return n*fat(n-1);
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n, resultado;
	
	printf("Digite o número para o cálculo do fatorial: ");
	scanf("%d",&n);
	
	resultado = fat(n);
	
	printf("\n!%d: %d",n,resultado);

return 0;
}
