#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
main( ){
	int anoAtual, idade, anoNasc, idadeFutura;
	setlocale(LC_ALL, "Portuguese");
	printf ("Digite o ano atual: " );
	scanf ("%d", &anoAtual ); 
	
	printf ("Digite a sua idade: " );
	scanf ("%d", &idade );
	
	anoNasc = (anoAtual - idade);
	
	printf ("\nVocê nasceu no ano de: %d  ",  anoNasc  ) ;
	
	idadeFutura = (2034 - anoNasc );
	
	printf ("\nNo ano de 2034 você terá: %d ", idadeFutura  );
}
