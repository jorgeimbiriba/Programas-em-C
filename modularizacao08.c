#include <stdio.h>

double calculoH(int n){
	double H = 0.0;
	int i;
	int numerador = 2;
	int denominador = 500;
	
	for(i=0;i<n;i++){
		H += (double)numerador/denominador;
		
		//Alternador de números
		if(numerador==2){
			numerador=5;
		}else{
			numerador=2;
		}
		denominador-=50;
	}
	
	return H;  
	   
}

int main(){
	int n;
	double resultado;
	
	printf("Tendo em vista que H = 2/500 + 5/450 + 2/400...\nQuantos termos deseja calcular? ");
	scanf("%d",&n);

    resultado=calculoH(n);
    printf("\nO valor da soma dos %d primeiros termos de H: %lf",n,resultado);
    
return 0;  
}
