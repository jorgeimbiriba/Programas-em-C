#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
    int n; // Ordem da matriz
    printf("Digite a ordem do quadrado m�gico: ");
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

    // C�lculo da constante m�gica (soma de cada linha/coluna/diagonal)
    int constante_magica = n * (n*n + 1) / 2;

    // Verifica��o das linhas
    int soma_linha;
    for (i = 0; i < n; i++) {
    	//Se a vari�vel soma_linha estivesse fora do la�o, ela manteria o valor da soma da linha anterior
        soma_linha = 0;
        for (j = 0; j < n; j++) {
            soma_linha += matriz[i][j];
        }
        if (soma_linha != constante_magica) {
            printf("N�o � um quadrado m�gico.\n");
            return 0;
        }
    }

    printf("� um quadrado m�gico!\n");

    return 0;
}
