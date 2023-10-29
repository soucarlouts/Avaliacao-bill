#include <stdio.h>

int main() {
    int linhas, colunas;

    printf("forneca o numero de linhas e colunas das matrizes: ");
    scanf("%d %d", &linhas, &colunas);

    if (linhas <= 0 || colunas <= 0) {
        printf("Numero invalido de linhas ou colunas.\n");
        return 1;
    }

    int matriz1[linhas][colunas], matriz2[linhas][colunas];

    printf("forneca os elementos da primeira matriz:\n");
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            scanf("%d", &matriz1[i][j]);

    printf("forneca os elementos da segunda matriz:\n");
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            scanf("%d", &matriz2[i][j]);

    int sao_opostas = 1;

    for (int i = 0; i < linhas && sao_opostas; i++)
        for (int j = 0; j < colunas; j++)
            if (matriz1[i][j] + matriz2[i][j] != 0)
                sao_opostas = 0;

    if (sao_opostas)
        printf("eh oposta.\n");
    else
        printf("nao eh oposta.\n");

    return 0;
}