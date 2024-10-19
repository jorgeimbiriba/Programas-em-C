#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
main(){
	int comp, larg, per, valorArame, custoTotal;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Qual o comprimento do terreno? ");
	scanf("%d", &comp);
	
	printf("\nQual a largura do terreno? ");
	scanf("%d", &larg);
	
	printf("\nQual o valor do metro do arame? ");
	scanf("%d", &valorArame);
	
	per = ((2*larg) + (2*comp) );
	
	printf("\nTendo em vista que o terreno possui %d metros para serem cercados ", per);
	
	custoTotal = (valorArame*per);
	
	printf("\nO custo total será de %d reais " , custoTotal);	
}
