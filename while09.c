#include <stdio.h>
#include <math.h>

int main() {
    int num, i = 2;
    double raiz;

    printf("Digite um número inteiro maior que 1: ");
    scanf("%d", &num);

    // Verificações iniciais
    if (num <= 1) {
        printf("%d não é um número primo.\n", num);
        return 0;
    }

    if (num == 2) {
        printf("%d é um número primo.\n", num);
        return 0;
    }

    // Calculando a raiz quadrada
    raiz = sqrt(num);

    // Verificando divisibilidade até a raiz quadrada usando while
    while (i <= raiz) {
        if (num % i == 0) {
            printf("%d não é um número primo.\n", num);
            return 0;
        }
        i++;
    }

    printf("%d é um número primo.\n", num);
    return 0;
}
