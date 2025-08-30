#include <stdio.h>

/* Desafio xadrez, código de implementação do movimento da torre, bispo, rainha e cavalo, com o uso de procedimentos de recursividade 
e loops aninhados com uso de condições múltiplas. */

/*
Procedimento de recursividade que controla o movimento da torre
o procedimento tower_movement, recebe o valor da variável mov_tower que é 1, dessa forma é aplicada sobre essa entrada a condicional,
enquanto mov_tower for menor ou igual a 5 será impresso: A torre se moveu para a direita e o número referente ao valor da variável mov_tower
após a impressão o procedimento tower_movement chama a si mesmo, porém adicionando 1 ao valor de mov_tower, assim na proxima impressão o numero exibido 
será o anterior + 1.
*/
void tower_movement(int a) {
        if (a <= 5) {
        printf("A torre se moveu para a direita (N° de casas: %d)\n", a);
         tower_movement(a + 1);
    }
}

/*Procedimento de recursividade que controla o movimento do bispo
O movimento do bispo é controlado dois loops aninhados, o loop externo controla o movimento vertical,
e o loop interno controla o movimento horizontal.
a variacel b desse procedimento de recursividade recebe o valor da variavel mov_bisp que esta na função main, e é iniciada dentro 
do loop for externo com valor 1, enquanto mov_bisp for menor ou igal a cinco sera impresso: O bispo se moveu para cima e e o número referente ao valor da variável
mov_bisp que sera incrementada em +1 toda vez que o loop acontecer.
Para o loop interno foi criada a variável c fora dos loops e iniciada com o valor 1, isso foi feito pois ao criar c dentro do loop interno, mesmo c sendo incrementado em 1
ao final da execução, seu valor era reiniciado quando o loop externo acontecia, fazendo c voltar a ter valor 1 e gerando um loop infinito.
*/
void bisb_movement (int b) {
    int c = 1;
        for (b = 1 ; b <= 5; b++){
            printf("O bispo se moveu para cima (N° de casas %d)\n", b);
            for (; c <= b; c++){
                printf("O bispo se moveu para a direita (N° de casas %d)\n", c);
            }         
        }
}

/*
Procedimento de recursividade que controla o movimento da rainha
segue exatamente a mesma lógica do controle de movimento da torre
*/
void queen_movement (int d) {
        if (d <= 8) {
        printf("A rainha se moveu para a esquerda (N° de casas %d)\n", d);
        queen_movement (d + 1);
    }
}

int main(){


    //Declaração das variáveis usadas nos blocos de recursividade
    int mov_tower = 1;
    int mov_bisp;
    int mov_queen = 1;
    
    //chamada para execução dos blocos de recursividade
    bisb_movement(mov_bisp);
    printf("\n");
    tower_movement(mov_tower);
    printf("\n");
    queen_movement(mov_queen);
    printf("\n");

    //Declaração das variáveis usadas nos loops aninhados de movimento do cavalo
    int mov_horse1 = 1;
    int mov_horse2;

    //Loops aninhados (while (for)) que controlam os movimentos 1 e 2 do cavalo, tanto o loop externo quanto o interno fazem uso de 
    //multiplas condições e operadores lógicos
    //a impressão no loop externo ocorre se o valor da variável mov_horse1 for maior ou igual a 1 E(lógico) menor ou igual a 2
    //o loop interno imprime quando o mov_horse for igual a 2 E(lógico) a variável mov_horse2 for menor ou igual a 1
    while (mov_horse1 >= 1 && mov_horse1 <= 2)
    {
        printf("O cavalo se moveu para cima (N° de casas: %d)\n", mov_horse1);
     
     for(mov_horse2 = 1; (mov_horse1 == 2) && (mov_horse2 <= 1); mov_horse2++) {
        printf("O cavalo se moveu para a direita (N° de casa: %d)\n", mov_horse2);
     }

     mov_horse1++;
    }
    printf("\n");

return 0;

}
