#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	char result;
	int vitorias = 0;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Em um projeto de t�nis para crian�as o professor realizar� a seguinte classifica��o: ");
	
	printf("\nParticipantes que venceram 5 ou 6 jogos ser�o colocados no Grupo 1");
	printf("\nParticipantes que venceram 3 ou 4 jogos ser�o colocados no Grupo 2");
	printf("\nParticipantes que venceram 1 ou 2 jogos ser�o colocados no Grupo 3");
	printf("\nParticipantes que n�o venceram nenhum jogo n�o ser�o convidados a continuar com os treinamentos");
	
	printf("\n\nLevando em considera��o que: \nV significa que venceu e P significa que perdeu");
	
	printf("\n\nDigite a seguir o resultado da partida de t�nis:");
	
	for (int i = 0; i<6;i++){
       scanf(" %c", &result);	
	   if (result=='V'|| result=='v'){
	   	 vitorias++;
	   }		
	}
	
	if (vitorias==5 || vitorias==6){
		printf("Grupo 1");
	}else if (vitorias==3 || vitorias==4){
		printf("Grupo 2");
	}else if (vitorias==1 || vitorias==2){
		printf("Grupo 3");
	}else{
		printf("-1");
	}
	
}
