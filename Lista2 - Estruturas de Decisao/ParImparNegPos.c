#include <stdio.h>
int main()
{

    int i, n, pares=0, impares=0, negativos=0, positivos=0;

    for(i=1; i<=5; i++){

        scanf("%d", &n);
        if(n % 2 == 0){
            pares++;
        }
        if(n % 2 != 0){
            impares++;
        }
        if(n < 0){
            negativos++;
        }
        if(n > 0){
            positivos++;
        }

    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);


    return 0;
}