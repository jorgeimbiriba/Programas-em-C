#include <stdio.h>
#include <locale.h>

main(){
	int num;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número ");
	scanf("%d", &num);
	
	switch(num){
		case 1 : printf("Este número é referente ao mês de Janeiro ");break;
		case 2 : printf("Este número é referente ao mês de Fevereiro ");break;
		case 3 : printf("Este número é referente ao mês de Março ");break;
		case 4 : printf("Este número é referente ao mês de Abril ");break;
		case 5 : printf("Este número é referente ao mês de Maio ");break;
		case 6 : printf("Este número é referente ao mês de Junho ");break;
		case 7 : printf("Este número é referente ao mês de Julho ");break;
		case 8 : printf("Este número é referente ao mês de Agosto ");break;
		case 9 : printf("Este número é referente ao mês de Setembro ");break;
		case 10 : printf("Este número é referente ao mês de Outubro ");break;
		case 11 : printf("Este número é referente ao mês de Novembro ");break;
		case 12 : printf("Este número é referente ao mês de Dezembro ");break;
		default:printf("Número Inválido");
	}
}
