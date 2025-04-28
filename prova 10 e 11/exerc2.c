#include<stdio.h>
#include<stdlib.h>
typedef struct {
  char titulo[50];
  int views[60];
} Video;

void imprimeVideos (Video v[], int n, char c){
  for (int i = 0; i < n; i++)
  {
    int charIndex = 0;
    while(1){
      if (v[i].titulo[charIndex] == '\0') break;
      charIndex++;
    }
    charIndex--; // Pra fazer ele selecionar o ultimo char diferente de \0;
    if (v[i].titulo[charIndex] == c) printf("%s\n",v[i].titulo);
  }
  
}

int main(){
  Video videos[3] = { 
    {
      "sad",
      {0,0,1,2,3,4,5}
    },
    {
      "happy",
      {0,0,1,2,3,4,5}
    },
    {
      "hapiery",
      {0,0,1,2,3,4,5}
    },
  };
  imprimeVideos(videos,3,'y');

}