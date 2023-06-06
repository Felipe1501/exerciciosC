#include <stdio.h>

int main(void) {

    int qtd = 0;

    printf("Digite a quantidade de polígonos: ");
    scanf("%d", &qtd);
    printf("===================================\n");

    float perimetro[qtd];
    int lados=0;
    float valor=0;
    for(int i=0; i<qtd; i++) {
        printf("Poligono %i \n", i+1);
        printf("Quantidade de lados: ");
        scanf("%d", &lados);
        printf("Valor do lado: ");
        scanf("%f", &valor);
        perimetro[i] = lados * valor;
        printf("\n");
    }
    printf("===================================\n");
    printf("Perimetros\n");

    for(int i=0; i<qtd; i++) {
        printf("Poligono %d -> %.2f\n", i+1, perimetro[i]);
    }

    return 0;
}
