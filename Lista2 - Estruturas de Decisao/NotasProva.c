#include <stdio.h>

int main() {

    int nr;

    scanf("%i", &nr);

    if(nr == 0){
        printf("E\n");
    }
    else if(nr >= 1 && nr <= 35){
        printf("D\n");
    }
    else if(nr >= 36 && nr <= 60 ){
        printf("C\n");
    }
    else if(nr >= 61 && nr <= 85){
        printf("B\n");
    }
    else if(nr >= 86 && nr <= 100){
        printf("A\n");
    }
    else if( nr > 100){
        printf("Opcao Invalida!!!\n");
    }

    return 0;
}