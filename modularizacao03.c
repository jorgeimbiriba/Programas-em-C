#include <stdio.h>
#include <locale.h>

 int somaNprimeirosNumerosPares(int n){
	int i,soma=0;
	printf("N�meros que ser�o somados: ");
	for(i=0;i<n;i++){
		//Caso seja i<=0, n�o contar� com o 0
		soma+=2*i;//O i-�simo n�mero par � 2*i
		printf("[%d]",2*i);//Exibe os n�meros somados
		
	}
	return soma;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,soma;
	
	printf("Digite a quantidade de n�meros desejados: ");
	scanf("%d",&n);
	
	soma = somaNprimeirosNumerosPares(n);
	printf("\nSoma dos %d primeiros n�meros pares: %d",n,soma);
	
return 0;
}
