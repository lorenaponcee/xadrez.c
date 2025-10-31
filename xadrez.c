
#include <stdio.h>

void movimentoTorre(int m) {
        if (m <= 8) { // 8 casas = limite maximo de casas no xadrez
            printf("A torre se moveu da casa %d para a casa %d à direita\n", m, m + 1);
            movimentoTorre (m + 1);
        }
}
void movimentoBispo(int b) {
    for (int h = 1, v = 1; v <= 8 && h <= 8; v++, h++) {
        printf("O bispo se moveu da casa %d,%d para a casa %d,%d na diagonal superior direita\n", v, h, v + 1, h + 1);
    } // a linha de código executará o movimento diagonal, sendo v para vertical e h para horizontal. o movimento indicará
        // de qual casa para qual casa o bispo se moveu

}
void movimentoRainha(int r) {
        if (r <= 8) { // 8 casas = limite maximo de casas no xadrez
            printf("A rainha se moveu da casa %d para a casa %d à esquerda\n", r, r + 1);
            movimentoRainha(r + 1);
        }
 }
 void movimentoCavalo () {
    for (int c = 1; c < 2; c++) {
        while (c <= 2) {
            printf("Cavalo foi para cima\n");
            c++;
        }
        printf("Cavalo foi para direita\n");
    }
}
int main () {
printf("Bem vindo ao jogo de xadrez!\n");
    printf("\n"); // para pular uma linha e deixar organizado
 // Torre
    movimentoTorre(1); // o numero 1 indica a casa inicial da torre
    printf("\n");
 // Bispo
    movimentoBispo(1); // o numero 1 indica a casa inicial do bispo
    printf("\n");
   // Rainha
    movimentoRainha(1); // o numero 1 indica a casa inicial da rainha
    printf("\n");
   // Cavalo
    movimentoCavalo();

    return 0;
}