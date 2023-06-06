#include <stdio.h>
#include <string.h>

int main(){

    char consoantes[30];
    int i, j=0;

    do{

    char palavras[30];

    scanf(" %s", palavras);

    palavras[strlen(palavras)] = '\0';

    for(i=0; i<strlen(palavras); i++){
        if(palavras[i] != 'A' &&
           palavras[i] != 'E' &&
           palavras[i] != 'I' &&
           palavras[i] != 'O' &&
           palavras[i] != 'U' &&
           palavras[i] != 'a' &&
           palavras[i] != 'e' &&
           palavras[i] != 'i' &&
           palavras[i] != 'o' &&
           palavras[i] != 'u' ){
          consoantes[j] = palavras[i];
          j++;
        }
    }
    consoantes[j] = '\0';
    j = 0;
    printf("%s\n", consoantes);
    }while(strlen(consoantes) != 0);

return 0;
}
