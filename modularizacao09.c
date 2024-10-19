#include <stdio.h>
#include <math.h>

double calculoH(int n){
	double H = 0.0;
	int i;
	int numerador=1;
	int denominador=pow(1,3);
	
	for(i=0;i<n;i++){
		denominador=pow(2*i+1,3); // Calcula o cubo do número ímpar, semelhante ao 2k+1
		H+=(double)numerador/denominador;
	}
	return H;
}

int main(){
	int n;
   	double resultado;
	
	scanf("%d",&n);

    resultado=calculoH(n);
    printf("\nO valor da soma dos %d primeiros termos de H: %lf",n,resultado);
    
return 0;  
}
