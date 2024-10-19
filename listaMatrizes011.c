#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
    int n; // Ordem da matriz
    printf("Digite a ordem do quadrado mágico: ");
    scanf("%d", &n);
    
    int i,j;
    int matriz[n][n];

    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da constante mágica (soma de cada linha/coluna/diagonal)
    int constante_magica = n * (n*n + 1) / 2;

    // Verificação das linhas
    int soma_linha;
    for (i = 0; i < n; i++) {
    	//Se a variável soma_linha estivesse fora do laço, ela manteria o valor da soma da linha anterior
        soma_linha = 0;
        for (j = 0; j < n; j++) {
            soma_linha += matriz[i][j];
        }
        if (soma_linha != constante_magica) {
            printf("Não é um quadrado mágico.\n");
            return 0;
        }
    }

    printf("É um quadrado mágico!\n");

    return 0;
}
