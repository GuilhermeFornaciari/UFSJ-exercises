#include<stdio.h>
#include<stdlib.h>
typedef struct {
  char titulo[50];
  int views[60];
} Video;

int emDeclinio(Video v){
  int viewsUltimos10Dias = 0;
  double mediaDeViews = 0;
  for (int i = 0; i < 60; i++){
    mediaDeViews += v.views[i];
  }
  mediaDeViews = mediaDeViews / 60;
  for (int i = 0; i < 10; i++){
    if (v.views[i] > mediaDeViews) return 0; // se caso for maior do que a média, automaticamente não está em declinio, retorna "false" 
  }
  return 1; // se não foi parado pelo código acima, está em declinio
  
}

int main(){
}