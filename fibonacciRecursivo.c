#include <stdio.h>
#include <locale.h>

int fib(int n){
	int i,a,b,c;
	
	if(n==1 || n==2){
		return 1;
	}else{
		a=1;
		b=1;
		for (i=3;i<n;i++){
			c=a+b;
			a=b;
			b=c;
		}
	return c;
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	
	printf("Tendo em vista que a Sequência de Fibonacci é dada por: 1 1 2 3 5 8 13...");
	printf("\nInsira a quantidade N de termos para calcular a sequência: ");
	scanf("%d",&n);
	
	printf("\nFibonacci de %d termos: %d",n,fib(n));
	
 return 0;	
}
