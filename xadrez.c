#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    int mov_bisp = 1;
    int mov_tower = 1;
    int mov_queen;

    while (mov_bisp <=5)
    {
        printf("O bispo se moveu para cima e para direita (N° de casas: %d)\n", mov_bisp);
        mov_bisp++;
    }
    printf("\n");

    do {
        printf("A torre se moveu para a direita (N° de casas: %d)\n", mov_tower);
        mov_tower++;
    } while (mov_tower <= 5);
    printf("\n");

    for (mov_queen = 1; mov_queen <= 8; mov_queen++ ) {

        printf("A rainha se moveu para a esquerda (N° de casas: %d)\n", mov_queen);
    }
    printf("\n");

    int mov_horse1 = 1;
    int mov_horse2;

    while (mov_horse1 >= 1 && mov_horse1 <= 2)
    {
        printf("O cavalo se moveu para baixo (N° de casas: %d)\n", mov_horse1);
     
     for(mov_horse2 = 1; (mov_horse1 == 2) && (mov_horse2 <= 1); mov_horse2++) {
        printf("O cavalo se moveu para a esquerda (N° de casa: %d)\n", mov_horse2);
     }

     mov_horse1++;
    }
    printf("\n");

return 0;
}
