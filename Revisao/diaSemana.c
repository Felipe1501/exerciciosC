#include <stdio.h>

int main(){

    int dia;

    scanf("%i", &dia);

    switch(dia){
        case 1:
        printf("DOMINGO\n");
        break;

        case 2:
        printf("SEGUNDA\n");
        break;

        case 3:
        printf("TERCA\n");
        break;

        case 4:
        printf("QUARTA\n");
        break;

        case 5:
        printf("QUINTA\n");
        break;

        case 6:
        printf("SEXTA\n");
        break;

        case 7:
        printf("SABADO\n");
        break;

        default:
        printf("INEXISTENTE\n");
    }


    return 0;
}
