#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int baseSudoku[9][9] = {
{0,4,3,9,8,1,2,5,6},
{5,8,1,2,7,6,3,4,9},
{2,9,6,4,3,5,8,7,1},
{3,7,4,6,1,2,5,9,8},
{8,6,5,7,4,9,1,3,2},
{1,2,9,3,5,8,7,6,4},
{6,5,8,1,9,3,4,2,7},
{4,3,2,8,6,7,9,1,5},
{9,1,7,5,2,4,6,8,3}
};
int sudoku[9][9] = {
{0,4,3,9,8,1,2,5,6},
{5,8,1,2,7,6,3,4,9},
{2,9,6,4,3,5,8,7,1},
{3,7,4,6,1,2,5,9,8},
{8,6,5,7,4,9,1,3,2},
{1,2,9,3,5,8,7,6,4},
{6,5,8,1,9,3,4,2,7},
{4,3,2,8,6,7,9,1,5},
{9,1,7,5,2,4,6,8,3}
};
void vermelho(){
  printf("\x1b[1m\033[7;91m");
}
void Ciano(){
  printf("\033[0;36m");
}
void Default(){
  printf("\033[0m");
}
void naoSelecionavel(){
  printf("\x1b[1m\033[7;48m");
}
void selecionavel(){
  printf("\x1b[1m\033[7;42m");
}
void resetarCor(){
  printf("\033[0m");
  naoSelecionavel();
}
void decideCor(int x,int y){
  if (sudoku[y][x] != baseSudoku[y][x] || sudoku[y][x] == 0) selecionavel();
  else naoSelecionavel();
}
void limparConsole(){
  printf("\e[1;1H\e[2J");
}

void salvarSudoku(){
  FILE *arquivo = fopen("SudokuSave.bin","wb"); //Save é o jogo em andamento
  if (arquivo == NULL){
    printf("Erro ao tentar abrir o arquivo!");
    return;
  }
  fwrite (sudoku, sizeof(int), sizeof sudoku, arquivo); 
  fclose(arquivo);
  FILE *arquivo2 = fopen("SudokuBaseSave.bin","wb"); //BaseSave é o default, o jogo em branco
  if (arquivo2 == NULL){
    printf("Erro ao tentar abrir o arquivo2!");
    return;
  }
  fwrite (baseSudoku, sizeof(int), sizeof baseSudoku, arquivo2); 
  fclose(arquivo2);
}
void carregarSudoku(){
  FILE *arquivo = fopen("SudokuSave.bin","rb"); //Save é o jogo em andamento
  if (arquivo == NULL)
  {
    printf("Erro ao tentar abrir o arquivo!");
    return;
  }
  fread(sudoku,sizeof(sudoku),1,arquivo);
  fclose(arquivo);
  FILE *arquivo2 = fopen("SudokuBaseSave.bin","rb"); //BaseSave é o default, o jogo em branco
  if (arquivo2 == NULL)
  {
    printf("Erro ao tentar abrir o arquivo!");
    return;
  }
  fread(baseSudoku,sizeof(baseSudoku),1,arquivo2);
  fclose(arquivo2);
}
void verLeaderboard(){} ///aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
void SalvarLeaderboard(){} ///aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa


int JaPossuiColuna(int valor, int x,int y){
  for (int YSudoku = 0; YSudoku < 9; YSudoku++){
    if (sudoku[YSudoku][x] == valor) return 1;
  }
  return 0;  
}
int JaPossuiLinha(int valor, int x,int y){
  for (int Xsudoku = 0; Xsudoku < 9; Xsudoku++){
    if (sudoku[y][Xsudoku] == valor) return 1;
  }
  return 0;  
}
int JaPossuiTabela(int valor, int x,int y){
  int posInicialX = (x/3)*3; //arredonda para o inicio do bloco
  int posInicialY = (y/3)*3; //arredonda para o inicio do bloco
  for (int y = posInicialY; y < posInicialY + 3; y++){
    for (int x = posInicialX ; x < posInicialX + 3; x++){
      if (sudoku[y][x] == valor) return 1;
    }
  }
  return 1;
}
void completaBloco(int x,int y){
  int value;
  do{
    value =  rand() % (8 - 0 + 1);
    printf("%d\n",value);
  } while (JaPossuiColuna(value,x,y) || JaPossuiLinha(value,x,y) );
  // QUANDO passar da verificação:
  sudoku[y][x] = value;
}
void completaSudoku(){
  for(int XTabela = 0; XTabela < 3;XTabela++){
    for(int YTabela = 0; YTabela < 3;YTabela++){
      completaBloco(XTabela,YTabela);
    }
  }
}
int checaColuna(int x){
  int soma = 0; 
  for (int YSudoku = 0; YSudoku < 9; YSudoku++){
    soma += sudoku[YSudoku][x];
  }
  return soma != 45; // Se a soma dos valores for diferente de 45, então a coluna é inválida  
}
int checaLinha(int y){
  int soma = 0; 
  for (int Xsudoku = 0; Xsudoku < 9; Xsudoku++){
    soma += sudoku[y][Xsudoku];
  }
  return soma != 45; // Se a soma dos valores for diferente de 45, então a linha é inválida  
}
int checaTabela(int x,int y){ // checa se o bloco que aquele valor está é valido, indiferentemente da posição que ele receber
  int posInicialX = (x/3)*3; //arredonda para o inicio do bloco
  int posInicialY = (y/3)*3; //arredonda para o inicio do bloco
  int soma = 0; 
  for (int y = posInicialY; y < posInicialY + 3; y++){
    for (int x = posInicialX ; x < posInicialX + 3; x++){
      soma += sudoku[y][x];
    }
  }
  printf("%d\n",soma);
  return soma != 45; // Se a soma dos valores for diferente de 45, então a linha é inválida  
}
int checaSudoku(){
  for (int i = 0; i < 9; i++){
    if (checaColuna(i) || checaLinha(i)) return 1;
  }
  for (int blocosX = 0; blocosX < 9; blocosX += 3){
    for (int blocosY = 0; blocosY < 9; blocosY += 3){
      if (checaTabela(blocosX,blocosY)) return 1;
    }
  }
  return 0; //Se caso passou em todas as posições, retorna 0
}
int eSelecionavel (int x, int y){
  return sudoku[y][x] != baseSudoku[y][x] || sudoku[y][x] == 0;
}
void alteraValor(){
  int x,y,valor;
  while (1){
    printf("Digite as posições de X e Y que você deseja alterar separado por um espaço, exemplo:\n0 0\n");
    scanf("%d %d",&x,&y);
    if (x < 1 || x > 9 || y < 1 || y > 9){ printf("Digite os valores corretamente!"); continue;}
    x--,y--;
    if (!eSelecionavel(x,y)){printf("\n Comando inválido, o valor selecionado foi definido pelo jogo!\n");continue;}
    printf("Qual é o valor que você deseja colocar na posição (%d,%d)?",x+1, y+1);
    scanf("%d",&valor);
    if (valor < 1 || valor > 9){ printf("Digite os valores corretamente!"); continue;}
    sudoku[y][x] = valor;
    break;
  }
}
void apagaValor(){
  int x,y,valor;
  while (1){
    printf("Digite as posições de X e Y que você deseja apagar separado por um espaço, exemplo:\n0 0\n");
    scanf("%d %d",&x,&y);
    if (x < 1 || x > 9 || y < 1 || y > 9){ printf("Digite os valores corretamente!"); continue;}
    x--,y--;
    if (!eSelecionavel(x,y)){printf("\n Comando inválido, o valor selecionado foi definido pelo jogo!\n");continue;}
    sudoku[y][x] = 0;
    break;
  }
}
void printSudoku(){
  int blocoY = -1;
  int blocoX = -1;
  printf("                              ");
  for(int i = 0; i < 9; i++){
    printf("%d ",i+1);
  }
  for (int y = 0; y < 9; y++)
  {
    if (blocoY != y/3){
      printf("\n"); // da um espaçamento de coluna quando o bloco mudar na posição X
      blocoY = y/3;
      }
    for (int x = 0; x < 9; x++){
      if (x == 0) printf("                           %d",y+1);   
      if (blocoX != x/3){
        printf(" "); // da um espaçamento de coluna quando o bloco mudar na posição X
        blocoX = x/3;
        }
      decideCor(x,y);
      if (sudoku[y][x] == 0) printf("0"); // printa espaço em branco se for 0
      else printf("%d",sudoku[y][x]);
      if (x != 8 && x!= 2 && x != 5) {
        resetarCor(); 
        printf("|");
      } // adiciona o '|' entre cada elemento  exceto nas divisas
      Default();
    }
    printf("\n");

  }
  

}
void criarSudokuNovo(){

}
int main(){
  limparConsole();
  printf("Seja bem vindo ao Sudoku em C!\n");
  int respostaUser = 0;
  do  {
  printf("O que você deseja fazer?\n");
  printf("\x1b[1m\033[7;92m  (1) Gerar um novo jogo  ");
  Default(); printf("   "); //Espaça as duas opções;
  printf("\x1b[1m\033[7;91m  (2)Carregar um novo jogo  \n\n");
  printf("\x1b[1m\033[7;96m                   (3) Ver leaderbord                    \n\n"     );
  scanf("%d",&respostaUser);
  if (respostaUser < 1 || respostaUser > 3) {
    vermelho();
    printf("                    Comando inválido                     \n\n");
    Default();
  }
  if (respostaUser == 3)verLeaderboard();
  } while (respostaUser != 1 && respostaUser != 2);
  
  if (respostaUser == 1) criarSudokuNovo();
  else if (respostaUser == 2) carregarSudoku();
  Default();
  do{
    limparConsole();
    printSudoku();
    printf("Oque você deseja fazer?\n");
    printf("\x1b[1m\033[7;92m  (1) Alterar um valor  ");
    Default(); printf("   "); //Espaça as duas opções;
    printf("\x1b[1m\033[7;96m  (2) Apagar um valor  ");
    Default(); printf("   "); //Espaça as duas opções;
    printf("\x1b[1m\033[7;56m  (3) Salvar o jogo  ");
    Default(); printf("\n\n      ");
    printf("\x1b[1m\033[7;93m  (4) Preencher uma posição  ");
    Default(); printf("   "); //Espaça as duas opções;
    printf("\x1b[1m\033[7;91m  (5) Preencher o jogo todo :(  ");
    Default(); printf("\n\n");
    scanf("%d",&respostaUser);
    if (respostaUser == 1) alteraValor();
    if (respostaUser == 2) apagaValor();
    if (respostaUser == 3) salvarSudoku();
    if (respostaUser == 4) {
      while (1){
        int x,y;
        printf("Digite as posições de X e Y que você deseja alterar separado por um espaço, exemplo:\n0 0\n");
        scanf("%d %d",&x,&y);
        if (x < 1 || x > 9 || y < 1 || y > 9){ printf("Digite os valores corretamente!"); continue;}
        x--,y--;
        if (!eSelecionavel(x,y)){printf("\n Comando inválido, o valor selecionado foi definido pelo jogo!\n");continue;}
        completaBloco(x,y);
        break;
      }
    }
    if (respostaUser == 5) completaSudoku();
    
  } while ( (checaSudoku()));
  limparConsole();
  printf("Parabéns, você conclui o jogo!!! seu tempo: sim\n");
  return 0;


}



  // printf("\x1b[1m\033[7;97m asd ");
  // printf("\x1b[1m\033[7;96m asd ");
  // printf("\x1b[1m\033[7;95m asd ");
  // printf("\x1b[1m\033[7;94m asd ");
  // printf("\x1b[1m\033[7;93m asd ");
  // printf("\x1b[1m\033[7;92m asd ");
  // printf("\x1b[1m\033[7;91m asd ");
  // printf("\x1b[1m\033[7;90m asd ");
  // printf("\n");

