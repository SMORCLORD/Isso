#include "Rastros.h"
// Notas sobre funcoes no header

int main (){
	int vict;
	clear ();
	char tabuleiro [8][8];
	int posicaoAs[]={3,4}; 
    tabuleiroInicio (tabuleiro);
    for (int x = 1 ,i = 0 ;x ;i++){
    	printf ("Jogada N%d\nJogador %d\n",(i/2)+1 ,(i % 2)+1);
    	if (coordenada (tabuleiro ,posicaoAs)){
            vict = winPlayer (tabuleiro ,posicaoAs ,(i % 2)+1);
    	    if (vict){
    	    	clear ();
    	        pfMatriz (tabuleiro); 
    	        printf ("O Jogador %d Ganhou!!\n",vict); 
    	        exit (0);
    	    } 
    		clear ();
    	}
        else i--;
    	pfMatriz (tabuleiro);
    }
}

void tabuleiroInicio (char arr[8][8]){
    for (int i = 0;i < 8;i++){
    	array1Fase (arr [i]);
    }
    arr [7][0] = '1';
    arr [0][7] = '2';
    arr [3][4] = '*';
    pfMatriz (arr);
}

void pfMatriz (char arr[8][8]){
	printf ("Tabuleiro \n");
	for (int i = 0;i < 8;i++){
		printf("%d |",8-i);
        pfArray (arr[i]);
        putchar ('\n');
    }
    for (int i = 0; i < 3; ++i) putchar (' ');	
    for (int i = 0; i < 8; ++i) printf ("%c ",65 + i);
    putchar ('\n');
}

void pfArray (char arr[]){
	for (int i = 0; i < 8; ++i)
	     printf("%c ",arr [i]);
}

void array1Fase (char arr[]){
	for (int i = 0; i < 8; ++i)
		arr[i] = '.';
}	

void clear (){
     printf("\e[1;1H\e[2J");
}