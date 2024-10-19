#include <stdio.h>
#include <locale.h>
#include <string.h>
 
int main(void){
setlocale(LC_ALL,"Portuguese");	
struct cadastro{
 	char nome [50];
 	char endereco[100];
 	char telefone[20];
 	int idade;
	int codigo;  
 }aluno;// ou struct cadastro aluno
 
 int i,n,acm1=0,acm2=0,acm3=0;
 printf("Insira quantos alunos serão cadastrados: ");
 scanf("%d",&n);
 
 for(i=0;i<n;i++){
    printf("\nInforme o nome do(a) %dº aluno(a): ",i+1);
    fflush(stdin);
    fgets(aluno.nome,50,stdin);
 
    printf("\nInforme o endereço: ");
    fflush(stdin);
    fgets(aluno.endereco,100,stdin);
 
    printf("\nInforme o telefone: ");
    fflush(stdin);
    fgets(aluno.telefone,20,stdin);
 
    printf("\nInforme a idade: ");
    scanf("%d",&aluno.idade);
 
    printf("\nInforme o código (1) Windows, (2) Word e (3)Excel : ");
    scanf("%d",&aluno.codigo);
    
    switch(aluno.codigo){
    	case 1: printf("\nCadastro realizado com sucesso!");
		        acm1++;
		        break;
    	case 2: printf("\nCadastro realizado com sucesso!");
		        acm2++;
		        break;
    	case 3: printf("\nCadastro realizado com sucesso!");
		        acm3++;
		        break;
    	default: printf("Código Inválido");
	}
 }
 
    printf("Número de inscritos no Curso Windows: %d",acm1);
    printf("\nNúmero de inscritos no Curso Word: %d",acm2);
    printf("\nNúmero de inscritos no Curso Excel: %d",acm3);
    

 
 
 return 0;
}
