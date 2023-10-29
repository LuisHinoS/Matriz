#include <stdio.h>

int main() {
    int tamanho;
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &tamanho);

    int matriz[50][50];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int somaPrincipal = 0;
    int somaSecundaria = 0;

    for (int i = 0; i < tamanho; i++) {
        somaPrincipal += matriz[i][i];
        somaSecundaria += matriz[i][tamanho - 1 - i];
    }

    printf("Soma da Diagonal Principal: %d\n", somaPrincipal);
    printf("Soma da Diagonal Secundária: %d\n", somaSecundaria);

    return 0;
}
