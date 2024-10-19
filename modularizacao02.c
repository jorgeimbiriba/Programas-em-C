#include <stdio.h>
#include <locale.h>
#include <ctype.h>

float calcM(float altura){
	return ((72.6*altura)-58);
}

float calcF(float altura){
	return ((62.1*altura)-44.7);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	float pesoIdeal, altura;
	char sexo;
	
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	
	printf("\nDigite seu sexo:  M – masculino e F - Feminino: ");
	scanf("%s",&sexo);

	switch(toupper(sexo)){
		case 'M': pesoIdeal=calcM(altura);
		          printf("\nPeso ideal: %.2f", pesoIdeal);
		          break;
		case 'F': pesoIdeal=calcF(altura);
		          printf("\nPeso ideal: %.2f", pesoIdeal);
		          break;
		default:  printf("\nCaractere Inválido! Tente Novamente");		            
	}
	return 0;
}
