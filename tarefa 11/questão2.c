#include<stdio.h>
#include<stdlib.h>

int main(){
  char vetor[100];
  scanf("%s",vetor);
  int charIndex = 0;
  while(1){
    if (vetor[charIndex] == '\0') break;
    charIndex++;
  }
  charIndex--; // Pra fazer ele selecionar o ultimo char diferente de \0;
  printf("%s\n",vetor);

  char newStr[100];
  for (int i = 0; i <= charIndex; i++)
  {
    newStr[i] = vetor[charIndex-i];
  }
  printf("%s\n",newStr);
}