#include <stdio.h>
#include <math.h>
//ACERTOU DE PRIMEIRA!!!!!
double calculoS(int n){
	double S = 0.0;
	int i;
	int numerador = 1;
	int denominador;
	
	for(i=1;i<=n;i++){
		denominador = pow(i,2);
		S+=(double)numerador/denominador;
	}
	
	return S;
}

int main(){
	int n;
	double resultado;
	printf("Insira a quantidade N de termos: ");
	scanf("%d",&n);
	
	resultado = calculoS(n);
	
	printf("\nS: %.6f", resultado);
	
return 0;	
}
