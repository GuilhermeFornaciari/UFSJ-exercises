#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
void substituir(char *texto, char letra){
  int charIndex = 0;
  while(1){
    if (texto[charIndex] == '\0')return;
    switch (texto[charIndex]){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':{
      texto[charIndex] = letra;
      break;
      }
    }
    charIndex++;
  }
}
int main(){
  char string[100] = "Guilherme"; 
  char letra = 'a';
  substituir(string,letra);
  printf("%s\n", string);
  return 0;
}