//
// Created by Carlota on 29/10/2023.
//
#include <stdio.h>

int main() {
    int tam;
    printf("insira o tamanho da matriz quadrada: ");
    scanf("%d", &tam);

    int matriz[tam][tam];

    printf("insira os elementos da matriz:\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Montante Diagonal Principal
    int somatoriadiagonalprincipal = 0;
    for (int i = 0; i < tam; i++) {
        somatoriadiagonalprincipal += matriz[i][i];
    }

    // Montante Diagonal Secundária
    int somatoriadiagonalsecundaria = 0;
    for (int i = 0; i < tam; i++) {
        somatoriadiagonalsecundaria += matriz[i][tam - 1 - i];
    }

    printf("Ssomatória da Diagonal Principal: %d\n", somatoriadiagonalprincipal);
    printf("Somatória da Diagonal Secundária: %d\n", somatoriadiagonalsecundaria);

    return 0;
}