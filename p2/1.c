#include <stdio.h>
#include <string.h>

int main(void) {

    int cont = 0;

    char palavra[20];

    scanf("%19[^\n]", palavra);

    int i;
    
    for(i=0; i< strlen(palavra); i++) {
        if(palavra[i] == 'a' || palavra[i] == 'A' ||
           palavra[i] == 'e' || palavra[i] == 'E' ||
           palavra[i] == 'i' || palavra[i] == 'I' ||
           palavra[i] == 'o' || palavra[i] == 'O' ||
           palavra[i] == 'u' || palavra[i] == 'U') {
              cont++;
           }
    }

    printf("%d", cont);


    return 0;
}
