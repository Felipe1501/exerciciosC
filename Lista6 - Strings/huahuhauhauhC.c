#include <stdio.h>
#include <string.h>

    int main(){

    int i, j, tam, r = 1;
    char linha[55], vogal[5];
    scanf("%s", &linha);

    for(i=0, j=0; i<strlen(linha); i++){
        switch(linha[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vogal[j] = linha[i];
                j++;
                break;
        }
    }

    tam = j;
    for(i=0; i<tam/2; i++, j--){
        if(vogal[i]!= vogal[j-1]){
            r = 0;
            break;
        }
    }

    printf("%c\n", (!r? 'N' : 'S'));

    return 0;



}
