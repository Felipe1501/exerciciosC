#include <stdio.h>
#include<stdlib.h>
int main(){
    char tipo;
    int N, coelho, ratos,  sapos, soma, cobaias;
    float percCoelho, percRatos, percSapos;


    coelho = 0;
    ratos = 0;
    sapos = 0;
    soma = 0;

    scanf("%d", &N);

    while(N--){

        scanf("%d %c", &cobaias, &tipo);
        soma += cobaias;

    if (tipo == 'C'){
        coelho += cobaias;

    }
        else if (tipo == 'R'){
        ratos += cobaias;

    }
        else if (tipo == 'S'){
        sapos += cobaias;

        }
    }

    percCoelho = (float)coelho * 100.0 / soma;

    percRatos = (float)ratos * 100.0 / soma;

    percSapos = (float)sapos * 100.0 / soma;


    printf("Total: %d cobaias\n", soma);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %\n", percCoelho);
    printf("Percentual de ratos: %.2f %\n", percRatos);
    printf("Percentual de sapos: %.2f %\n", percSapos);

}