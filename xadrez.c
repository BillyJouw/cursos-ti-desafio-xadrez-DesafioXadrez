#include <stdio.h>  
        int main (){
            // declarando variaveis

            int torre = 1;
            int rainha = 0;
            int bispo = 1;

            // mover torre 5 casas a direira

            while (torre <= 5)
            {
                printf("Torre: Direita.\n");
                torre++;
            }

            // mover o bispo 

            for (int bispo = 0; bispo < 5; bispo++)
            {
                printf("Biscpo: Cima, Direita.\n");
            }

            //mover rainha
            
            do
            {
                printf("Rainha: Esquerda.\n");
                rainha++;
            } while (rainha <= 7);
             
        
            return 0;
        }