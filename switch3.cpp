#include <stdio.h>
#include <locale.h>

main(){
	int num;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um n�mero ");
	scanf("%d", &num);
	
	switch(num){
		case 1 : printf("Este n�mero � referente ao m�s de Janeiro ");break;
		case 2 : printf("Este n�mero � referente ao m�s de Fevereiro ");break;
		case 3 : printf("Este n�mero � referente ao m�s de Mar�o ");break;
		case 4 : printf("Este n�mero � referente ao m�s de Abril ");break;
		case 5 : printf("Este n�mero � referente ao m�s de Maio ");break;
		case 6 : printf("Este n�mero � referente ao m�s de Junho ");break;
		case 7 : printf("Este n�mero � referente ao m�s de Julho ");break;
		case 8 : printf("Este n�mero � referente ao m�s de Agosto ");break;
		case 9 : printf("Este n�mero � referente ao m�s de Setembro ");break;
		case 10 : printf("Este n�mero � referente ao m�s de Outubro ");break;
		case 11 : printf("Este n�mero � referente ao m�s de Novembro ");break;
		case 12 : printf("Este n�mero � referente ao m�s de Dezembro ");break;
		default:printf("N�mero Inv�lido");
	}
}
