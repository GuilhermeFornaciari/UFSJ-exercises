#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
void contaVogal(char v[]){
  int charIndex = 0;
  int vogais = 0;
  while(1){
    if (v[charIndex] == '\0'){
      printf("Há %d vogais na string\n",vogais);
      return;
    }
    switch (v[charIndex]){
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
      vogais++;
      break;
      }
    }
    charIndex++;
  }
}
int main(){
  char string[100] = "aeiou"; 
  contaVogal(string);
  char string2[100] = "Jandir"; 
  contaVogal(string2);
  return 0;
}