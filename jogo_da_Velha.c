#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned char tabuleiro[3][3];
    int jogada = 0, linha, coluna;

    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            tabuleiro[i][j] = '.';
        }
    }

    puts("Digite coordenadas na forma linha coluna: ");
    while (1)
    {
        for(int i = 0; i < 3; i ++){
            for(int j = 0; j < 3; j ++){
                printf("%c", tabuleiro[i][j]);
            }
            printf("\n");
        }

        if ((tabuleiro[0][0] == 'O' && tabuleiro[0][1] == 'O' && tabuleiro[0][2] == 'O') ||
           (tabuleiro[1][0] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[1][2] == 'O') ||
           (tabuleiro[2][0] == 'O' && tabuleiro[2][1] == 'O' && tabuleiro[2][2] == 'O') ||
           (tabuleiro[0][0] == 'O' && tabuleiro[1][0] == 'O' && tabuleiro[2][0] == 'O') ||
           (tabuleiro[0][1] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][1] == 'O') ||
           (tabuleiro[0][2] == 'O' && tabuleiro[1][2] == 'O' && tabuleiro[2][2] == 'O') ||
           (tabuleiro[0][0] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][2] == 'O') ||
           (tabuleiro[0][2] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][0] == 'O')){

                printf("O Jogador com O ganhou!!");
                break;                                                                                     
        }

        if ((tabuleiro[0][0] == 'X' && tabuleiro[0][1] == 'X' && tabuleiro[0][2] == 'X') ||
           (tabuleiro[1][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[1][2] == 'X')  ||
           (tabuleiro[2][0] == 'X' && tabuleiro[2][1] == 'X' && tabuleiro[2][2] == 'X')  ||
           (tabuleiro[0][0] == 'X' && tabuleiro[1][0] == 'X' && tabuleiro[2][0] == 'X')  ||
           (tabuleiro[0][1] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][1] == 'X')  ||
           (tabuleiro[0][2] == 'X' && tabuleiro[1][2] == 'X' && tabuleiro[2][2] == 'X')  ||
           (tabuleiro[0][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][2] == 'X')  ||
           (tabuleiro[0][2] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][0] == 'X')){

                printf("O Jogador com X ganhou!!");
                break;                                                                                     
        }

        if (jogada % 2 == 0){
            printf("Jogador x você deseja jogar em qual coordenada \'\'linha coluna\'\'? ");
            scanf("%d %d", &linha, &coluna);
            tabuleiro[linha - 1][coluna - 1] = 'X';
        }
        else{
            printf("Jogador O você deseja jogar em qual coordenada \'\'linha coluna\'\'? ");
            scanf("%d %d", &linha, &coluna);
            tabuleiro[linha - 1][coluna - 1] = 'O';
        }

        jogada ++;
    }
    
}