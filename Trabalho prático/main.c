#include<stdio.h>
#include<stdlib.h>
#define BRANCO "Esc[97m"
int baseSudoku[9][9];
int sudoku[9][9] = {
{0,0,0,3,4,5,0,2,0},
{3,4,9,7,0,6,0,0,1},
{2,0,6,0,0,1,4,7,0},
{1,0,2,0,7,9,0,8,5},
{5,9,0,0,0,0,0,0,0},
{0,6,0,0,0,0,2,1,9},
{9,1,0,0,0,7,0,4,2},
{0,2,7,9,1,3,0,6,0},
{0,0,0,0,0,0,0,0,0}
};
int possibilidades[9] = {1,2,3,4,5,6,7,8,9};

void Ciano(){
  printf("\033[0;36m");
}
void Default(){
  printf("\033[0;29m");
}
void naoSelecionavel(){
  printf("\x1b[1m\033[7;48m");
}

void selecionavel(){
  printf("\x1b[1m\033[7;42m");
}
void Vermelho(){
  printf("\033[1;31m");
}
void decideCor(int x,int y){
  if (sudoku[y][x] == baseSudoku[y][x] || sudoku[y][x] == 0) selecionavel();
  else naoSelecionavel();
}
void limparConsole(){
  printf("\e[1;1H\e[2J");
}

// int checaSeJaPossuiTabela(int valor, Coordenada posicaoTabela){

// }
// int checaSeJaPossuiColuna(int valor, Coordenada posicaoTabela){
  
// }
// int checaSeJaPossuiLinha(int valor, Coordenada posicaoTabela){
  
// }
// void preencherBloco(Coordenada posicaoTabela, Coordenada posicaoBloco){
   
// }  
void alteraValor(int valor,int x, int y){
  sudoku[y][x] = valor;
}
void printSudoku(){
  limparConsole();
  int blocoY = -1;
  int blocoX = -1;
  for (int y = 0; y < 9; y++)
  {
    if (blocoY != y/3){
      printf("\n"); // da um espaçamento de coluna quando o bloco mudar na posição X
      blocoY = y/3;
      }
    for (int x = 0; x < 9; x++){
      if (blocoX != x/3){
        printf(" "); // da um espaçamento de coluna quando o bloco mudar na posição X
        blocoX = x/3;
        }
      decideCor(x,y);
      if (sudoku[y][x] == 0) printf("0"); // printa espaço em branco se for 0
      else printf("%d",sudoku[y][x]);
      naoSelecionavel();
      if (x != 8 && x!= 2 && x != 5) {
        naoSelecionavel();
        printf(" ");
      } // adiciona o '|' entre cada elemento  exceto nas divisas
      Default();
    }
    printf("\n");

  }
  

}

// void checaCompleto(){

// }
void salvarSudoku(){
  FILE *arquivo = fopen("SudokuSave.bin","wb");
  if (arquivo == NULL){
    printf("Erro ao tentar abrir o arquivo!");
    return;
  }
  fwrite (sudoku, sizeof(int), sizeof sudoku, arquivo); 
  fclose(arquivo);
  FILE *arquivo2 = fopen("SudokuSave.bin","wb");
  if (arquivo2 == NULL){
    printf("Erro ao tentar abrir o arquivo2!");
    return;
  }
  fwrite (baseSudoku, sizeof(int), sizeof sudoku, arquivo2); 
  fclose(arquivo2);
}
void carregarSudoku(){
  FILE *arquivo = fopen("SudokuSave.bin","rb");
  if (arquivo == NULL)
  {
    printf("Erro ao tentar abrir o arquivo!");
    return;
  }
  fread(sudoku,sizeof(sudoku),1,arquivo);
  fclose(arquivo);
  FILE *arquivo2 = fopen("SudokuBaseSave.bin","rb");
  if (arquivo2 == NULL)
  {
    printf("Erro ao tentar abrir o arquivo!");
    return;
  }
  fread(baseSudoku,sizeof(baseSudoku),1,arquivo2);
  fclose(arquivo2);
}
int main(){
  // printf("\x1b[1m\033[7;47m asd ");
  // printf("\x1b[1m\033[7;46m asd ");
  // printf("\x1b[1m\033[7;45m asd ");
  // printf("\x1b[1m\033[7;44m asd ");
  // printf("\x1b[1m\033[7;43m asd ");
  // printf("\x1b[1m\033[7;42m asd ");
  // printf("\x1b[1m\033[7;41m asd ");
  // printf("\x1b[1m\033[7;40m asd ");
  // printf("\n");
  // printf("\033[7;97m asd ");
  // printf("\033[7;97m asd ");
  // printf("\033[7;96m asd ");
  // printf("\033[7;93m asd ");
  // printf("\033[7;91m asd ");
  // printf("\033[7;90m asd ");
  // printf("\n");

  // salvarSudoku();
  // sudoku[0][1] = 12;
  // carregarSudoku();
  // alteraValor (1,0,0);
  printSudoku();

}

// void preencherUmaTabela(Tabela *tabela){
//   for(int XBloco = 0; XBloco < 3;XBloco++){
//     for(int YBloco = 0; YBloco < 3;YBloco++){
      
//     }
//   }

// }
// void preencherSudoku(){
//   for(int XTabela = 0; XTabela < 3;XTabela++){
//     for(int YTabela = 0; YTabela < 3;YTabela++){
//       preencherUmaTabela(sudoku[XTabela,YTabela]);
//     }
//   }
// }