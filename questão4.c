#include <stdio.h>

int main(){
    int matriz[100][100], transposta[100][100];
    int linhas, colunas, i, j;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < linhas; ++i){
        for (j = 0; j < colunas; ++j) {
            printf("Elemento |[%d][%d]|: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < linhas; ++i) {
        for (j = 0; j < colunas; ++j) {
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("\nMatriz original:\n");
    for (i = 0; i < linhas; ++i) {
        for (j = 0; j < colunas; ++j) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta:\n");
    for (i = 0; i < colunas; ++i) {
        for (j = 0; j < linhas; ++j) {
            printf("%d\t", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
