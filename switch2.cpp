#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	float salario, novoSalG, novoSalE,novoSalT,novoSalD,difG,difE,difT,difDef;
	int cod;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite aqui o seu salário atual: ");
	scanf("%f", &salario);
	printf("Digite o código desejado: ");
	scanf("%d", &cod);
	
	switch (cod){
		case 101: printf("Seu cargo é de Gerente");break;
		case 102: printf("Seu cargo é de Engenheiro");break;
		case 103: printf("Seu cargo é de Técnico");break; 
		default:  printf("Seu cargo não consta no banco de dados"); 
	}
	
	if(cod==101){
		novoSalG=((salario*0.1)+salario);
		   printf("\nSeu salário era de %.2f reais", salario);
		   printf("\nSeu salário receberá um reajuste de 10%% e será de %.2f reais ", novoSalG );
		difG=((novoSalG-salario));
		   printf("\nA diferença ficou em %.2f reais", difG);
	}else
	      if(cod==102){
	      	  novoSalE=((salario*0.2)+salario);
	      	      printf("\nSeu salário era de %.2f reais ", salario);
	      	      printf("\nSeu salário receberá um reajuste de 20%% e será de %.2f reais ", novoSalE);
	      	  difE=((novoSalE-salario));
		          printf("\nA diferença ficou em %.2f reais", difE);      
		  }else
		      if(cod==103){
		      	    novoSalT=((salario*0.3)+salario);
		      	        printf("\nSeu salário era de %.2f reais ", salario);
		      	        printf("\nSeu salário receberá um reajuste de 30%% e será de %.2f reais ", novoSalT);
		      	    difT=((novoSalT-salario));
		            printf("\nA diferença ficou em %.2f reais", difT);    
			  }else{
				       novoSalD = ((salario*0.4)+salario);
			     	      printf("\nSeu salário era de %.2f reais ", salario);
			     	      printf("\nApesar do seu cargo não constar no Banco de Dados \nSeu salário receberá um reajuste de 40%% e será de %.2f reais", novoSalD);
	                   difDef=((novoSalD-salario));
	                   printf("\nA diferença ficou em %.2f reais", difDef);
		   }	
}
