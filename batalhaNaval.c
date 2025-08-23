#include <stdio.h>

int main(){

    //Criação do tabuleiro (matriz 10x10)
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10];
    int i,j;

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        } 
}

// --- Navio horizontal (3 posições) ---
tabuleiro[2][4] = 3;
tabuleiro[2][5] = 3;
tabuleiro[2][6] = 3;

// --- Navio vertical (3 posições) ---
tabuleiro[5][7] = 3;
tabuleiro[6][7] = 3;
tabuleiro[7][7] = 3;

printf("   ");
for (j = 0; j < 10; j++){
    printf("%d ", j);
}
printf("\n");

for (i = 0; i < 10; i++){
    printf("%c  ", linha[i]);
    for (j = 0; j < 10; j++){
        printf("%d ", tabuleiro[i][j]);
}
printf("\n");
}

return 0;
}