#include <stdio.h>

void moverTorre (int Direita){
    if (Direita > 0)
    {
        moverTorre(Direita -1);
    }
    
}

int main()
{
    // declarando variaveis

    int torre = 5;
    int rainha = 0;
    int bispo = 1;

    // mover torre 5 casas a direira

        printf("Torre: Direita.\n");
        moverTorre(torre);

    // mover o bispo
    printf("\n");

    for (int bispo = 0; bispo < 5; bispo++)
    {
        printf("Bispo: Cima, Direita.\n");
    }

    // mover rainha
    printf("\n");

    do
    {
        printf("Rainha: Esquerda.\n");
        rainha++;
    } while (rainha <= 7);

    // mover cavalo
    printf("\n");
    int movimento = 1;

    while (movimento--)
    {
        for (int j = 0; j < 2; j++){
            printf("Cavalo: cima\n");
        }
        printf("Cavalo: direita\n");
    }

    return 0;
}