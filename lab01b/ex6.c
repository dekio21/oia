#include <stdio.h>

int main() {
    int matriz[20][20];
    int matriz_transposta[20][20]; 
    int l, c;

    printf("Digite o numero de linhas: ");
    scanf("%d", &l);

    printf("Digite o numero de colunas: ");
    scanf("%d", &c);

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            matriz_transposta[j][i] = matriz[i][j];
        }
    }

    printf("A matriz original e:\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nA matriz transposta e:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < l; j++) {
            printf("%d ", matriz_transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}
