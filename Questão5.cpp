#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main(){
	int valorDiaria, dias, euro ;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Qual o valor da diária desse hotel em reais? ");
	scanf("%d", &valorDiaria );
	
	euro = (5.46) ;
	dias = ((valorDiaria*euro)*10 );
	
	printf("\nTendo em vista que o euro está custando atualmente 5,46 reais");
	
	printf("\nSendo assim após 10 dias o reitor pagará %d reais", dias);
	
}
