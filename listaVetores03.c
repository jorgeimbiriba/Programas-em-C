#include <stdio.h>
#include <locale.h>

main(){
	int i,cont=0;
	float temp[7],media,acm=0,maior,menor; 
	setlocale(LC_ALL,"Portuguese");
	//O contador deve ser inicializado com 0 para não dar problema
	
	printf("Insira as temperaturas dos Dias da Semana:\n");
	for (i=0;i<7;i++){
		scanf("%f",&temp[i]);
		acm+=temp[i];
	}
	
    //Média funciona 
	media=(acm/7);
	for(i=0;i<7;i++){
		if(temp[i]>media){	
		cont++;
		}
	}
	
	//Funcionando normalmente
	menor=temp[0];
	for(i=0;i<7;i++){
		if(temp[i]<menor){
			menor=temp[i];
		}
	}
	maior=temp[0];
    for(i=0;i<7;i++){
    	if(temp[i]>maior){
    		maior=temp[i];
		}
	}
	
	
	printf("\nMaior Temperatura registrada dessa Semana: %.2f", maior);
	printf("\nMenor Temperatura registrada nessa Semana: %.2f", menor);
    printf("\nMédia de Temperatura: %.2f",media);
	printf("\nQuantidade de dias com a temperatura acima da média: %d",cont);
	
	return 0;
}
