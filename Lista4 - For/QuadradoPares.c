#include <stdio.h>
int main()
{

    int nr, i, quadrado;

    scanf("%d", &nr);

    for(i=1; i<=nr; i++){
        if(i % 2 == 0){
           quadrado = i * i;
           printf("%d^2 = %d\n", i, quadrado);
        }
    }


    return 0;
}
