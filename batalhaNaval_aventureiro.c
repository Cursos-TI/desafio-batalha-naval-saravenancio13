#include <stdio.h>

// Constantes para facilitar leitura do código
#define TAM 10
#define AGUA 0
#define NAVIO 3
#define TAM_NAVIO 3

int main(){

    char linha[TAM] = {'A','B','C','D','E','F','G','H','I','J'};

    int tabuleiro[TAM][TAM];
    int i, j;

    // Inicializa o tabuleiro com água (0)
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
    // ------------------ POSICIONAMENTO DOS NAVIOS ------------------

    // --- Navio 1: horizontal (3 posições) ---
    int l1 = 2, c1 = 4;
    for (j = 0; j < TAM_NAVIO; j++) {
        tabuleiro[l1][c1 + j] = NAVIO;
    }

    // --- Navio 2: vertical (3 posições) ---
    int l2 = 5, c2 = 7;
    for (i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[l2 + i][c2] = NAVIO;
    }

    // --- Navio 3: diagonal principal (↘) ---
    int l3 = 0, c3 = 0;
    for (i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[l3 + i][c3 + i] = NAVIO;
    }

    // --- Navio 4: diagonal secundária (↙) ---
    int l4 = 0, c4 = 9;
    for (i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[l4 + i][c4 - i] = NAVIO;
    }

    // ------------------ IMPRESSÃO DO TABULEIRO ------------------
    printf ("   ");
    for (j = 0; j < TAM; j++) {
        printf("%d ", j);
    }
    printf("\n");

    for (i = 0; i < TAM; i++) {
        printf("%c ", linha[i]);
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}