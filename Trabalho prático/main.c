#include<stdio.h>
#include<stdlib.h>

#define BRANCO "Esc[97m"

typedef int Tabela[3][3] ;
Tabela sudoku[3][3];
int possibilidades[9] = {1,2,3,4,5,6,7,8,9};
typedef struct pos {
  int x;
  int y;
} Coordenada;


int checaSeJaPossuiTabela(int valor, Tabela tabela){

}
int checaSeJaPossuiColuna(int valor, Coordenada posicaoTabela){
  
}
int checaSeJaPossuiLinha(int valor, Coordenada posicaoTabela){
  
}
void preencherBloco(Coordenada posicaoTabela, Coordenada posicaoBloco){
   
}
void printSudoku(){
   
}
void checaCompleto(){

}
void limparConsole(){
  printf("\e[1;1H\e[2J");
}
void preencherUmaTabela(Tabela *tabela){
  for(int XBloco = 0; XBloco < 3;XBloco++){
    for(int YBloco = 0; YBloco < 3;YBloco++){
      
    }
  }

}
void preencherSudoku(int dificuldade){
  for(int XTabela = 0; XTabela < 3;XTabela++){
    for(int YTabela = 0; YTabela < 3;YTabela++){
      preencherTabela(sudoku[XTabela,YTabela]);
    }
  }
}
void salvarSudoku(){
  
}
void carregarSudoku(){


}
int main(){
  printf("\033[7;07m                    \033[0m\n");
  printf("\033[7;00m                    \033[0m\n");
}
