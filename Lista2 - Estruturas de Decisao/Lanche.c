#include <stdio.h>

int main(){

    int cd, qt;
    float vl;

    scanf("%i %i", &cd, &qt);

    switch(cd){
    case 1:
        vl = qt * 4.00;
        printf("Total: R$ %.2f\n", vl);
        break;
    case 2:
        vl = qt * 4.50;
        printf("Total: R$ %.2f\n", vl);
        break;
    case 3:
        vl = qt * 5.00;
        printf("Total: R$ %.2f\n", vl);
        break;
    case 4:
        vl = qt * 2.00;
        printf("Total: R$ %.2f\n", vl);
        break;
    case 5:
        vl = qt * 1.50;
        printf("Total: R$ %.2f\n", vl);
        break;
    default:
        printf("Codigo nao encontrado!\n");
    }

return 0;
}