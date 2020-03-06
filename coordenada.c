#include "Rastros.h"
// Notas sobre funcoes no header

int coordenada (char arr[8][8],int posicaoAs[]){
	int x = posicaoAs[0];
	int y = posicaoAs[1];
	int linha,coluna;
	scanf ("%d",&linha);
	scanf ("%d",&coluna);
	linha = 8-linha;
	coluna--;
    if ((coluna == y && linha == x) || limite (linha,x) || limite (coluna,y) || (arr[linha][coluna] == '#')){
        clear (); 
    	printf ("Jogada nao posivel\n");
    	return 0;
    }
    else{
       arr [x][y] = '#';
       arr [linha][coluna] = '*';
       posicaoAs [0] = linha;
       posicaoAs [1] = coluna;
       return 1;
    }
}

int limite (int novo,int centro){
	return ((novo > (centro + 1)) || (novo < (centro - 1)) || novo < 0 || novo > 8);
}

//---------------------------------------------------------------------------------------

int winPlayer (char arr[8][8],int posicao[],int jogador){
	int somaAs = 0 ,x = posicao [0] ,y = posicao [1];
	int totalAs = 8;
	if (arr [7][0] == '*' || arr [7][0] == '#') return 1;
	if (arr [0][7] == '*' || arr [0][7] == '#') return 2;
	if (x == 0 || x == 7){
		totalAs = totalAs - 3;
		if (y == 0 || y == 7) totalAs = totalAs - 2;		
	}
	else if (y == 0 || y == 7) totalAs = totalAs - 3;
	//Falta casos de limite onde x = 0 || x = 7 || y = 0 | y = 7  
    for (int i = x - 1, i <= x+1,i++) somaAs = somaAs + somaAste (arr[i],y); 
    if (somaAs >= totalAs) return jogador; 
	return 0;
}

int somaAste (arr [], y){
	int soma = 0; // Incompleto 
	return soma;
}