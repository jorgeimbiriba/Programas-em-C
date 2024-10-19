#include <stdio.h>
#include <ctype.h>
#include <locale.h>

main(){
	char estCivil;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite a letra inicial do seu Estado Civil: ");
	scanf("%c", &estCivil);
	
	switch(toupper(estCivil)){
		case 'C': printf("Estado Civil: Casado(a)");break;
		case 'Q': printf("Estado Civil: Desquitado(a)");break;
		case 'S': printf("Estado Civil: Solteiro(a)");break;
		case 'D': printf("Estado Civil: Divorciado(a)");break;
		case 'V': printf("Estado Civil: Viúvo(a)");break;
		default: printf("Inválido");	
	}
}
