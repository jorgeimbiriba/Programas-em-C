#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
main( ){
	int espFinal, espInicial, tempInicial, tempFinal, varEsp, varTemp, velMed;
	setlocale(LC_ALL, "Portuguese");
	
	printf ("Digite o espaço final: ");
	scanf("%d", &espFinal);
	
	printf ("Digite o espaço inicial: ");
	scanf("%d", &espInicial);
	
	printf("Digite o tempo inicial: ");
	scanf ("%d", &tempInicial);
	
	printf("Digite o tempo final: ");
	scanf ("%d", &tempFinal);
	
	varEsp = (espFinal - espInicial );
	varTemp = (tempFinal - tempInicial );
	
	velMed = (varEsp/varTemp );
	
	printf ("\nA variação de espaço será de %d quilômetros" , varEsp );
	
	printf ("\nA variação de tempo será de %d horas" , varTemp );
	
	printf ("\nA velocidade média será %d km/h ", velMed );
	
}
