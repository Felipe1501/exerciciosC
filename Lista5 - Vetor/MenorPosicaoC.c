#include <stdio.h>

int main(){

int menor, nr, i, posicao;


    scanf("%d", &nr);

    int vetor[nr];

    for(i=0; i<nr; i++){
        scanf("%d", &vetor[i]);
        menor = vetor[0];
    }

    for(i=1; i<nr; i++){
        if(menor> vetor[i]){
            menor = vetor[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);

    return 0;
}
