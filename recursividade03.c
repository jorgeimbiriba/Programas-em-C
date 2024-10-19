#include <stdio.h>
#include <locale.h>

int fat(int n){
	if (n==0){
		return 1;
	}else {
		return n*fat(n-1);
	}
}

float pot(float x, int n){
	if(n==0){
		return 1;
	}else{
		return x*pot(x,n-1);
	}
}

float somatoria (float x,int n){
	if (n==0){
		return 1; 
	}else{
		return (float)pot(x,n)/fat(n)+somatoria(x,n-1);
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
    float x;
	int n;
	
	printf("Digite o valor de x: ");
	scanf("%f",&x);
	
	printf("\nDigite o valor n: ");
	scanf("%d",&n);
	
	float resultado = somatoria(x, n);
    printf("O resultado da somatória é: %.2f\n", resultado);
	return 0;
}
