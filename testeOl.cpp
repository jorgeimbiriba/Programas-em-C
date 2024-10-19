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

// Função para calcular a pontuação total de um país
int calcularPontuacao(Pais p) {
    return p.ouro * 3 + p.prata * 2 + p.bronze;
}

int main() {
	setlocale(LC_ALL,"Portuguese");
    // Array para armazenar informações sobre os três países
    Pais paises[3];

    // Pedindo ao usuário para inserir informações sobre cada país
    for (int i = 0; i < 3; i++) {
        printf("Insira o nome do país %d: ", i + 1);
        scanf("%s", paises[i].nome);
        
        printf("\nInsira a quantidade de medalhas de ouro: ");
        scanf("%d", &paises[i].ouro);
        
        printf("\nInsira a quantidade de medalhas de prata: ");
        scanf("%d", &paises[i].prata);
        
        printf("\nInsira a quantidade de medalhas de bronze: ");
        scanf("%d", &paises[i].bronze);
    }

    // Calculando a pontuação total de cada país e classificando
    printf("\nClassificação Olímpica:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s: Pontuação %d\n", paises[i].nome, calcularPontuacao(paises[i]));
    }
}
