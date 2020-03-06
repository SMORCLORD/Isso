#include <stdio.h>
#include <stdlib.h>
// QQ array posicao/posicaoAs sem tamanho a ser passado em funcoes tem valor fixo de 2 por ser o par da posicao o *!!
// coordenada.c -------------------------------------------------------------------
int coordenada (char arr[8][8], int posicao[]);
int limite (int valor, int centro);
int isOcupada (char arr[8][8], int linha, int coluna);
int winPlayer (char arr[8][8], int posicao[], int jogador);
int somaAste (char arr [],int y);
// RastrosMain.c --------------------------------------------------------------------
void tabuleiroInicio (char arr[8][8]);
void pfMatriz (char arr [8][8]);
void pfArray (char arr[]);
void array1Fase (char arr[]);
void clear ();
// O PWACO !Fixe.
