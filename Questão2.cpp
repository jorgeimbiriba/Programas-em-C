#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
main( ){
	int espFinal, espInicial, tempInicial, tempFinal, varEsp, varTemp, velMed;
	setlocale(LC_ALL, "Portuguese");
	
	printf ("Digite o espa�o final: ");
	scanf("%d", &espFinal);
	
	printf ("Digite o espa�o inicial: ");
	scanf("%d", &espInicial);
	
	printf("Digite o tempo inicial: ");
	scanf ("%d", &tempInicial);
	
	printf("Digite o tempo final: ");
	scanf ("%d", &tempFinal);
	
	varEsp = (espFinal - espInicial );
	varTemp = (tempFinal - tempInicial );
	
	velMed = (varEsp/varTemp );
	
	printf ("\nA varia��o de espa�o ser� de %d quil�metros" , varEsp );
	
	printf ("\nA varia��o de tempo ser� de %d horas" , varTemp );
	
	printf ("\nA velocidade m�dia ser� %d km/h ", velMed );
	
}
