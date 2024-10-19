#include <stdio.h>
#include <locale.h>

 int somaNprimeirosNumerosPares(int n){
	int i,soma=0;
	printf("Números que serão somados: ");
	for(i=0;i<n;i++){
		//Caso seja i<=0, não contará com o 0
		soma+=2*i;//O i-ésimo número par é 2*i
		printf("[%d]",2*i);//Exibe os números somados
		
	}
	return soma;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,soma;
	
	printf("Digite a quantidade de números desejados: ");
	scanf("%d",&n);
	
	soma = somaNprimeirosNumerosPares(n);
	printf("\nSoma dos %d primeiros números pares: %d",n,soma);
	
return 0;
}
