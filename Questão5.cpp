#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main(){
	int valorDiaria, dias, euro ;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Qual o valor da di�ria desse hotel em reais? ");
	scanf("%d", &valorDiaria );
	
	euro = (5.46) ;
	dias = ((valorDiaria*euro)*10 );
	
	printf("\nTendo em vista que o euro est� custando atualmente 5,46 reais");
	
	printf("\nSendo assim ap�s 10 dias o reitor pagar� %d reais", dias);
	
}
