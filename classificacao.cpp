#include <stdio.h>
#include <locale.h>

main(){
	int medOuro1, medPrata1, medBronze1, medOuro2, medPrata2, medBronze2,medOuro3, medPrata3, medBronze3;
	char pais1, pais2, pais3;
	setlocale(LC_ALL,"Portuguese");
	
	printf("CLASSIFICAÇÃO OLÍMPICA");
	
	printf("\nQual o nome do primeiro país? ");
	scanf("%s",&pais1);
	
	printf("\nQuantas medalhas de ouro ganhou? ");
	scanf("%d",&medOuro1);
	
	printf("\nQuantas medalhas de prata ganhou? ");
	scanf("%d",&medPrata1);
	
	printf("\nQuantas medalhas de bronze ganhou? ");
	scanf("%d",&medBronze1);
	
	
	printf("\n\nQual o nome do segundo país? ");
	scanf("%s",&pais2);
	
	printf("\nQuantas medalhas de ouro ganhou? ");
	scanf("%d",&medOuro2);
	
	printf("\nQuantas medalhas de prata ganhou? ");
	scanf("%d",&medPrata2);
	
	printf("\nQuantas medalhas de bronze ganhou? ");
	scanf("%d",&medBronze2);
	
	
	printf("\n\nQual o nome do terceiro país? ");
	scanf("%s",&pais3);
	
	printf("\nQuantas medalhas de ouro ganhou? ");
	scanf("%d",&medOuro3);
	
	printf("\nQuantas medalhas de prata ganhou? ");
	scanf("%d",&medPrata3);
	
	printf("\nQuantas medalhas de bronze ganhou? ");
	scanf("%d",&medBronze3);
	
	
	
	
	
   //printf("\nConsiderando que cada medalha de ouro tem peso 3, cada prata tem peso 2 e cada bronze, peso 1");	
}
