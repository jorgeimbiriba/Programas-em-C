#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	float salario, novoSalG, novoSalE,novoSalT,novoSalD,difG,difE,difT,difDef;
	int cod;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite aqui o seu sal�rio atual: ");
	scanf("%f", &salario);
	printf("Digite o c�digo desejado: ");
	scanf("%d", &cod);
	
	switch (cod){
		case 101: printf("Seu cargo � de Gerente");break;
		case 102: printf("Seu cargo � de Engenheiro");break;
		case 103: printf("Seu cargo � de T�cnico");break; 
		default:  printf("Seu cargo n�o consta no banco de dados"); 
	}
	
	if(cod==101){
		novoSalG=((salario*0.1)+salario);
		   printf("\nSeu sal�rio era de %.2f reais", salario);
		   printf("\nSeu sal�rio receber� um reajuste de 10%% e ser� de %.2f reais ", novoSalG );
		difG=((novoSalG-salario));
		   printf("\nA diferen�a ficou em %.2f reais", difG);
	}else
	      if(cod==102){
	      	  novoSalE=((salario*0.2)+salario);
	      	      printf("\nSeu sal�rio era de %.2f reais ", salario);
	      	      printf("\nSeu sal�rio receber� um reajuste de 20%% e ser� de %.2f reais ", novoSalE);
	      	  difE=((novoSalE-salario));
		          printf("\nA diferen�a ficou em %.2f reais", difE);      
		  }else
		      if(cod==103){
		      	    novoSalT=((salario*0.3)+salario);
		      	        printf("\nSeu sal�rio era de %.2f reais ", salario);
		      	        printf("\nSeu sal�rio receber� um reajuste de 30%% e ser� de %.2f reais ", novoSalT);
		      	    difT=((novoSalT-salario));
		            printf("\nA diferen�a ficou em %.2f reais", difT);    
			  }else{
				       novoSalD = ((salario*0.4)+salario);
			     	      printf("\nSeu sal�rio era de %.2f reais ", salario);
			     	      printf("\nApesar do seu cargo n�o constar no Banco de Dados \nSeu sal�rio receber� um reajuste de 40%% e ser� de %.2f reais", novoSalD);
	                   difDef=((novoSalD-salario));
	                   printf("\nA diferen�a ficou em %.2f reais", difDef);
		   }	
}
