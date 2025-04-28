#include <stdio.h>


int countA(char text[]){
    int count = 0;
    for (int i = 0; i < sizeof(text) / sizeof(char); i++ ){
        if (text[i] == 'a'){
            count++;
        }
    }
    return count;
}
 
int main() {
    char medico[1001], jon[1001];
    scanf("%s", medico);
    scanf("%s", jon);
    int medicoCount = countA(medico);
    int jonCount = countA(jon);
    if (medicoCount < jonCount) {
        printf("no\n");
    } else {
        printf("go\n");
    }
    return 0;
}