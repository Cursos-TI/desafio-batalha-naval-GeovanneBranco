#include <stdio.h>

int main()
{
    int tabuleiro[10][10], linha[10];
    char coluna[10];
    int i, j, k, navio[10];

    // quanto indices ocupam 'navio'.
    for (i = 0; i < 9; i++)
    {
        navio[i] = 3;
    }
    // preenchendo a matriz com o valor 0.
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }
    // posicionando um navio na vertical
    for (i = 0, j = 5; i < 3; i++)
    {
        tabuleiro[i][j] = navio[i];
    }
    // posicionando um navio na horizontal.
    for (i = 1, j = 0; j < 3; j++)
    {
        tabuleiro[i][j + 1] = navio[j];
    }
    // posicionando um navio na diagonal de forma crescente.
    for (i = 4, j = 6, k = 0; k < 3; k++)
    {
        i = i + 1;
        j = j + 1;
        tabuleiro[i][j] = navio[k];
    }
    // posicionando um navio na diagonal de forma decrescente.
    for (i = 4, j = 6, k = 0; k < 3; k++)
    {
        i = i - 1;
        j = j + 1;
        tabuleiro[i][j] = navio[k];
    }
    // uma breve saudacao ao nosso usuario.
    printf("*** bem vindo ao batalha naval ***\n***");
    // posicionando numeros para representar as linhas do nosos jgo.
    for (i = 0; i < 10; i++)
    {
        linha[i] = 1 + i;
    }
    // posicionando letras que correspondem as colunas do nosso jogo.
    for (j = 0; j < 10; j++)
    {
        coluna[j] = 'A' + j;
        printf("%2.c ", coluna[j]);
    }
    printf("\n");
    // aqui de fato vamos apresentar a matriz ao usuario com todos os elementos ja posicionados.
    for (i = 0; i < 10; i++)
    {
        printf("%2.d ", linha[i]);
        for (j = 0; j < 10; j++)
        {
            printf(" %d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}
