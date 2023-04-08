#include <stdio.h>
int main()
{

    int i, nrs, posicao, maior;

    maior = 0;

    for(i=1;i<=100; i++){
        scanf("%d", &nrs);
        if (nrs > maior){
            maior = nrs;
            posicao = i;
        }

    }

    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}