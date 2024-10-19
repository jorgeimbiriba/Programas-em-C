#include <stdio.h>
#include <math.h>
#include <locale.h>

// Cria uma STRUCT para armazenar os dados de uma pessoa
typedef struct {
    char nome[50];
    int ouro;
    int prata;
    int bronze;
} Pais;

// Fun��o para calcular a pontua��o total de um pa�s
int calcularPontuacao(Pais p) {
    return p.ouro * 3 + p.prata * 2 + p.bronze;
}

int main() {
	setlocale(LC_ALL,"Portuguese");
    // Array para armazenar informa��es sobre os tr�s pa�ses
    Pais paises[3];

    // Pedindo ao usu�rio para inserir informa��es sobre cada pa�s
    for (int i = 0; i < 3; i++) {
        printf("Insira o nome do pa�s %d: ", i + 1);
        scanf("%s", paises[i].nome);
        
        printf("\nInsira a quantidade de medalhas de ouro: ");
        scanf("%d", &paises[i].ouro);
        
        printf("\nInsira a quantidade de medalhas de prata: ");
        scanf("%d", &paises[i].prata);
        
        printf("\nInsira a quantidade de medalhas de bronze: ");
        scanf("%d", &paises[i].bronze);
    }

    // Calculando a pontua��o total de cada pa�s e classificando
    printf("\nClassifica��o Ol�mpica:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s: Pontua��o %d\n", paises[i].nome, calcularPontuacao(paises[i]));
    }
}
