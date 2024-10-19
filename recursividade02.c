#include <stdio.h>
#include <locale.h>

float pot(float x, int n){
	if(n==0){
		return 1;
	}else{
		return x*pot(x,n-1);
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
    float x;
	int n;
	
	printf("Digite a base: ");
	scanf("%f",&x);
	
	printf("\nDigite o expoente: ");
	scanf("%d",&n);
	
    printf("\n%.2f elevado a %d é: %.2f\n", x, n, pot(x, n));
	return 0;
}
