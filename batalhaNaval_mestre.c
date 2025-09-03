#include <stdio.h>

#define TAM 10

int main() {
    int tabuleiro[TAM][TAM];
    int i, j;

    // Inicializa tabuleiro com 0 (água)
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ------------------ CRUZ (1) ------------------
    int centroL = 5; // linha central da cruz
    int centroC = 5; // coluna central da cruz

    // haste vertical
    for (i = -2; i <= 2; i++) {
        int l = centroL + i;
        if (l >= 0 && l < TAM) {
            tabuleiro[l][centroC] = 1;
        }
    }

    // haste horizontal
    for (j = -2; j <= 2; j++) {
        int c = centroC + j;
        if (c >= 0 && c < TAM) {
            tabuleiro[centroL][c] = 1;
        }
    }

    // ------------------ CONE (2) ------------------
    int origemL = 1;
    int origemC = 2;
    int altura = 3;
    for (i = 0; i < altura; i++) {
        for (j = -i; j <= i; j++) {
            int l = origemL + i;
            int c = origemC + j;
            if (l >= 0 && l < TAM && c >= 0 && c < TAM) {
                tabuleiro[l][c] = 2;
            }
        }
    }

    // ------------------ OCTAEDRO (3) ------------------
    int meioL = 2;
    int meioC = 7;
    int raio = 2;
    for (i = -raio; i <= raio; i++) {
        for (j = -raio; j <= raio; j++) {
            if ((i + j >= -raio) && (i + j <= raio) &&
                (i - j >= -raio) && (i - j <= raio)) {
                int l = meioL + i;
                int c = meioC + j;
                if (l >= 0 && l < TAM && c >= 0 && c < TAM) {
                    tabuleiro[l][c] = 3;
                }
            }
        }
    }

    // ------------------ IMPRIMIR TABULEIRO ------------------
    printf("   ");
    for (j = 0; j < TAM; j++) {
        printf("%2d", j);
    }
    printf("\n");

    for (i = 0; i < TAM; i++) {
        printf("%2d ", i);
        for (j = 0; j < TAM; j++) {
            printf("%2d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}