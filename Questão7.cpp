#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main(){
	int nota1, nota2, nota3, media, prov, estudoD, mediaPond;
	char aluno, disc;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o nome do aluno: ");
	scanf("%s", &aluno);
	
	printf("\nDigite a disciplina referente:  ");
	scanf("%s", &disc);
	
	printf("\nQual foi a 1ª Nota? ");
	scanf("%d", &nota1);
	
    printf("\nQual foi a 2ª Nota? ");
	scanf("%d", &nota2);
	
	printf("\nQual foi a 3ª Nota? ");
	scanf("%d", &nota3);
	
	printf("\nQual foi a nota do seu provão? ");
	scanf("%d", &prov );
	
	printf("\nQual foi sua nota no Estudo Dirigido? ");
	scanf("%d", &estudoD);
	
	media = ((nota1 + nota2 + nota3)/3);
	mediaPond = ((media*0.2 ) + (estudoD*0.2 ) + (prov*0.6) );
	
	printf("\nSua media final na disciplina foi %d" ,mediaPond);	
}
