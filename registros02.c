#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	struct cadastro{
		char nome[50];
		char endereco [100];
		char telefone[20];
		float salario;
		int anoDeCadastro;
	}clientes;
	
	int i, n;
	int anoAtual = 2024;
	float maior = 0;
	printf("Bem Vindo!!!\n\n");
	printf("Quantos clientes serão cadastrados? ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		int tempoDeCadastro = anoAtual - clientes.anoDeCadastro;
        float credito;
        
		printf("\nNome do(a) %dº cliente: ",i+1);
		fflush(stdin);
		fgets(clientes.nome,50,stdin);
		
		printf("\nEndereço: ");
		fflush(stdin);
		fgets(clientes.endereco,100,stdin);
		
		printf("\nTelefone: ");
		fflush(stdin);
		fgets(clientes.telefone,20,stdin);
		
		printf("\nSalário: ");
		scanf("%f",&clientes.salario);
		
		printf("\nAno de Cadastro: ");
		scanf("%d",&clientes.anoDeCadastro);
	
    
    if(tempoDeCadastro<=2){
    	credito = clientes.salario*0.10;
	}else if(tempoDeCadastro<=5){
		credito = clientes.salario*0.20;
	}else if(tempoDeCadastro<=10){
		credito = clientes.salario*0.30;
	}else{
		credito = clientes.salario*0.40;
	}
	printf("\nCrédito disponível ao(a) %dº cliente : %.2f\n",i+1,credito);
	
}//Fim do for
	
	//Questão da Prova
	 if(clientes.salario>maior){
        	maior = clientes.salario;
		}
	printf("\n%s tem o Maior salário: %.2f",clientes.nome,maior);
  return 0; 	
}
