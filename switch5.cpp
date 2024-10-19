#include <stdio.h>
#include <locale.h>

main(){
	int idade;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite a idade do nadador: ");
	scanf("%d", &idade);
	
	switch(idade){
		case 5: printf("Pertence a categoria Infantil A"); break;
		case 6: printf("Pertence a categoria Infantil A"); break;
		case 7: printf("Pertence a categoria Infantil A"); break;
		case 8: printf("Pertence a categoria Infantil B"); break;
		case 9: printf("Pertence a categoria Infantil B"); break;
		case 10: printf("Pertence a categoria Infantil B");break;
		case 11: printf("Pertence a categoria Juvenil A"); break;
		case 12: printf("Pertence a categoria Juvenil A"); break;
		case 13: printf("Pertence a categoria Juvenil A"); break;
		case 14: printf("Pertence a categoria Juvenil B"); break;
		case 15: printf("Pertence a categoria Juvenil B"); break;
		case 16: printf("Pertence a categoria Juvenil B"); break;
		case 17: printf("Pertence a categoria Juvenil B"); break;	
	}
	
	if(idade<5){
		printf("Não pertence a nenhuma categoria");
	}else
		if(idade>=18){
		    printf("Pertence a categoria Adulto");
		}
	
}
