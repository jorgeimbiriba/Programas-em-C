#include <stdio.h>
#include <locale.h>

int soma (int n){
	if(n==0)
	   return 0;
    else
		return n + soma(n-1);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,resultado;
	
	printf("Digite quantos N números deseja somar: ");
	scanf("%d",&n);
	
	resultado = soma(n);
	
	printf("\nResultado: %d",resultado);

return 0;	
}
