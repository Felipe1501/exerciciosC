#include <stdio.h>
int main()
{

    int x, y, i, soma, menor, maior;
    soma = 0;
    scanf("%d", &x);
    scanf("%d", &y);

    if(x < y){
        menor = x;
        maior = y;
    }else{
        menor = y;
        maior = x;
    }

    for(i=(menor + 1); i<maior; i++){
        if(i % 2 != 0){
            soma+=i;
        }
    }
    printf("%d\n", soma);

    return 0;
}
