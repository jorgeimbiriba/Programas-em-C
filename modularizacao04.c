#include <stdio.h>
#include <math.h>
#include <locale.h>

double calcularDistancia(double x1,double x2,double y1,double y2){
	return sqrt(pow (x2-x1,2) + pow (y2-y1,2)); 
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	double resultado,x1,x2,y1,y2;
	
	printf("Dados pontos X e Y digite seus pares ordenados:\n");
	
	printf("X1:");
	scanf("%lf",&x1);
	
	printf("X2:");
	scanf("%lf",&x2);
	
	printf("Y1:");
	scanf("%lf",&y1);
	
	printf("Y2:");
	scanf("%lf",&y2);
	
	resultado=calcularDistancia(x1,x2,y1,y2);
	
	printf("\nA distância entre os dois pontos é de %.2f unidades",resultado);
	
	return 0;
}
