#include <stdio.h>
#include <locale.h>
#include <string.h>
main(){
    float anos;
	char nome, sexo, estCivil;	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Qual o seu nome? ");
	scanf("%s", &nome);
	
	printf("\nQual o seu sexo? ");
	scanf("%s", &sexo);
	
    printf("\nQual o seu Estado Civil? ");
	scanf("%s", &estCivil);
	
	/*if (sexo== 'm' || sexo =='M'){
		printf("\nPrograma Finalizado");
	}*/
	
	if (sexo=='f' || sexo=='F' ){
		printf("Há quantos anos você está casada? ");
		scanf("%f", &anos );
	}
		

	
}
