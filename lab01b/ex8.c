#include <stdio.h>

void matriz_transposta(int matriz[][3], int transp[][3], int l, int c) {
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < l; j++) {
            transp[i][j] = matriz[j][i];
        }
    }
}
void print_matriz(int matriz[][3], int l, int c) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matriz[3][3] = 
    {
        {10, 2, 3},
        {25, 15, 9},
        {7, 14, 54}
                        };
    int transposta[3][3];
    int linhas = 3;
    int colunas = 3;

    matriz_transposta(matriz, transposta, linhas, colunas);

    printf("A matriz original e:\n");
    print_matriz(matriz, linhas, colunas);

    printf("\nA matriz transposta e:\n");
    print_matriz(transposta, colunas, linhas);

    return 0;
}

