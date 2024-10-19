#include <stdio.h>

// Função recursiva para calcular o fatorial
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

// Função para calcular a combinação
int combinacao(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return fatorial(n) / (fatorial(k) * fatorial(n - k));
    }
}

int main() {
    int n, k, resultado;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    printf("Digite o valor de K: ");
    scanf("%d", &k);

    resultado = combinacao(n, k);

    printf("C(%d, %d) = %d\n", n, k, resultado);

    return 0;
}
