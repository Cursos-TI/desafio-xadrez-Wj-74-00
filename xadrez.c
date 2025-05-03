#include <stdio.h>

const int torre = 5, bispo = 5, rainha = 8; // Declaração das variáveis.
int i, j;

int main() {

    printf("Movimeto da Torre: 5 casas para a direita.\n\n");

    i = 1;
    while (i <= torre)// Estrutura de repetição para o movimento da Torre.
    {
        printf("Direita %d\n", i);
        i++;
    }

    printf("\n");
    
    printf("Movimento do Bispo: 5 casas diagonal direita. \n\n");

    i = 1; 
    do{ // Estrutura de repetição para o movimento do Bispo.

        printf("Cima, Direita %d\n", i);
        i++;

    } while (i <= bispo);

    printf("\n");

    printf("Movimento da Rainha: 8 casas para a esquerda.\n\n");
    
    i = 1;
    // Estrutura de repetição para o movimento da Rainha.
    for(i > 0; i <= rainha; i++)
    {
        printf("Esquerda %d\n", i);
    };

    printf("\n");

    return 0;
}
